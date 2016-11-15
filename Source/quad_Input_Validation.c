#include <stdio.h>
#include "../HFiles/structDec.h"
/*
	quad_Input_Validation obtains input from the user, checking to see if the value is 
	a double and then returns the 3 doubles used for the quadratic calculation
	Input: None
	Output:Returns 3 doubles for a,b and c.
*/
Inputs quad_Input_Validation(){
	int scanFReturn = 0;
	double a,b,c;
	Inputs inputs;
    printf("Enter coefficients a, b and c: \n");
	while(scanFReturn == 0 || scanFReturn > 1){
		printf("Enter a: ");
		scanFReturn = scanf("%lf",&a);
		if(scanFReturn == 0 || scanFReturn > 1){
			printf("\nNot a valid value. Please Enter a again.\n"); 
		}
		scanf("%*c");
	}
	scanFReturn = 0;
	while(scanFReturn == 0 || scanFReturn > 1){
		printf("Enter b: ");
		scanFReturn = scanf("%lf",&b);
		if(scanFReturn == 0 || scanFReturn > 1){
			printf("\nNot a valid value. Please Enter b again.\n"); 
		}
		scanf("%*c");
	}
	scanFReturn = 0;
	while(scanFReturn == 0 || scanFReturn > 1){
		printf("Enter c: ");
		scanFReturn = scanf("%lf",&c);
		if(scanFReturn == 0 || scanFReturn > 1){
			printf("\nNot a valid value. Please Enter c again.\n"); 
		}
		scanf("%*c");
	}
	inputs.a = a;
	inputs.b = b;
	inputs.c = c;
	return inputs;
}
