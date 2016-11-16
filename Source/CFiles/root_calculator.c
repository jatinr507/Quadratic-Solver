#include "../HFiles/structDec.h"
#include <math.h>
/*
	root_calculator takes in information needed to calculate the roots and then
	does a specific calculation  for the roots depending on the value of the determinant.
	If the determinant is > 0, then there are two roots.
	If the determinant is < 0, then there are imaginary roots and that will be the only 
	thing reported. 
	If the determinant is = 0, then there is only 1 root.
	After doing the calculation, a root struct, which contains all of the roots, is returned.
	Inputs: Takes in the determinant,a,b, and c.
	Outputs: Returns a root struct with all of the roots information.
*/
Roots root_caclulator(double determinant,double a,double b,double c,Roots roots){
	roots.oneRoot = 0;
	if (determinant > 0)
    {
        roots.x1 = (-b+sqrt(determinant))/(2*a);
        roots.x2 = (-b-sqrt(determinant))/(2*a);
    }

    //condition for real and equal roots
    else if (determinant == 0)
    {
        roots.x1 = -b/(2*a);
	    roots.oneRoot = 1;
    }
    else
    {
		roots.valid = 0;
    }
	return roots;
}
