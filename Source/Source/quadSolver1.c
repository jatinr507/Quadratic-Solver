#include <stdio.h>
#include <math.h>
#include "structDec.h"
#include "quadSolverFunctions.h"
int main()
{
	Roots roots;
	Inputs inputs;
	double determinant;
	roots.valid = 1;
	inputs = quad_Input_Validation();
	if(inputs.a == 0){
		printf("Roots are imaginary...\n");
		return 0;
	}
	determinant = calculate_determinant(inputs.a,inputs.b,inputs.c);
	roots = root_caclulator(determinant,inputs.a,inputs.b,inputs.c,roots);
	if(roots.valid == 1 && roots.x2 == -1){
		printf("One root: %lf \n",roots.x1);
	}
	else if(roots.valid == 1){
		printf("Two roots: %lf and %lf \n",roots.x1,roots.x2);
	}
	else{
		printf("Roots were imaginary...\n");
	}
    return 0;
}   
