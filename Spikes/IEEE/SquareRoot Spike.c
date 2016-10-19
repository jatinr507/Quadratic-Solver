// Spike for checking the srt of infinity, -ve infinity, and NAN

#include <stdio.h>
#include <math.h>

int main ()
{
    double x =Infinity,y = -Infinity, z = NAN;
  
	printf("Square root of X is %lf\n", sqrt(x));
	printf("Square root of Y is %lf\n", sqrt(y) );
	printf("Square root of Z is %lf\n", sqrt(z) );
   
    return 0;
}