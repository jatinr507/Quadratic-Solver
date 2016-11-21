// Spike for Precision and Accuracy
#include <stdio.h>
#include <math.h>

int main() {

float floatvar = 99.95;
double doublevar = 99.95;
double x = 1.6,y = 1.8, error = .7;
double epsilon;


printf("99.95 as float = %f\n", floatvar);   // 99.95 = 99.949997
printf("99.95 as double = %lf\n", doublevar); // 99.95 = 99.950000

if (fabs(x-y) < error)
if ((fabs(x-y)/fabs(x) + fabs(y)) < error)
printf("success");
else
printf("fail");


return 0;

}
