/*
* t1.c
* Unit tests for root_caclulator()
*/
#include <stdlib.h>
#include "cunit.h"
#include "../../Source/CFiles/calculate_determinant.c"
#include "../../Source/CFiles/root_calculator.c"


int main() {
	Inputs	coefs;   // a, b and c for the quadratic eqaution
	Roots	roots;   // Root struct with x1 and x2
	double determinant;


	// initialize the unit testing framework
	cunit_init();

	//  A bad unit tet
	coefs.a = 1.0;
	coefs.b = 2.0;
	coefs.c = 1.0;
	determinant = calculate_determinant(coefs.a,coefs.b,coefs.c);
	roots = root_caclulator(determinant,coefs.a,coefs.b,coefs.c,roots);
	assert_feq("x1",roots.x1,-2.0);
	assert_feq("x2",roots.x2,-2.0);
	
	// A bad unit test, wrong order
	double  x1, x2;  // scratch variables
	x1 = 3.1;
	x2 = 3.3;
	coefs.a = 1.0;
	coefs.b = -x1 + -x2;
	coefs.c = x1*x2;
	determinant = calculate_determinant(coefs.a,coefs.b,coefs.c);
	roots = root_caclulator(determinant,coefs.a,coefs.b,coefs.c,roots);
	assert_feq("x1",roots.x1, x1);
	assert_feq("x2",roots.x2, x2);
	
	// A bad unit test, need to allow for round off!
	x1 = 3.1;
	x2 = 3.3;
	coefs.a = 1.0;
	coefs.b = -x1 + -x2;
	coefs.c = x1*x2;
	determinant = calculate_determinant(coefs.a,coefs.b,coefs.c);
	roots = root_caclulator(determinant,coefs.a,coefs.b,coefs.c,roots);
	assert_feq("x1",roots.x1, x2);
	assert_feq("x2",roots.x2, x1);

	// A "good" unit test, need to allow for round off!
	x1 = 3.1;
	x2 = 3.3;
	coefs.a = 1.0;
	coefs.b = -x1 + -x2;
	coefs.c = x1*x2;
	determinant = calculate_determinant(coefs.a,coefs.b,coefs.c);
	roots = root_caclulator(determinant,coefs.a,coefs.b,coefs.c,roots);
	assert_feqrerr("x1",roots.x1, x2, 10.0*cunit_dmacheps );
	assert_feqrerr("x2",roots.x2, x1, 10.0*cunit_dmacheps );

	exit(0);
}
