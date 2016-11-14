#include "structDec.h"
#include <math.h>
Roots root_caclulator(double determinant,double a,double b,double c,Roots roots){
	if (determinant > 0)
    {
        roots.x1 = (-b+sqrt(determinant))/(2*a);
        roots.x2 = (-b-sqrt(determinant))/(2*a);
    }

    //condition for real and equal roots
    else if (determinant == 0)
    {
        roots.x1 = -b/(2*a);
		roots.x2 = -1;
    }
    else
    {
		roots.valid = 0;
    }
	return roots;
}