#include <stdio.h>
#include <math.h>
#include "../HFiles/structDec.h"
#include "../HFiles/quadSolverFunctions.h"
/*
	quadSolver1.c first takes input from the user and 
	calls 3 other functions, calculate_determinant, quad_Input_Validation
	and root_calculator to create output for a calculation of the quadratic formula.
	Input: None, Gets input from quad_Input_Validation
	Output: Outputs the roots from the caclulation through printf
*/
int main()
{
	Roots roots;
	Inputs inputs;
	double determinant;
	roots.valid = 1;
	inputs = quad_Input_Validation();
	if(inputs.a == 0){
		printf("'a' cannot be zero.\n");
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
