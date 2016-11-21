// Spike for square root of Inf, nan, -ve Inf, and -ve nan 
#include <stdio.h>
#include <math.h>

int main() {

double a,b,c,d;

double i = INFINITY;
double j = NAN;
double k = -INFINITY;
double l = -NAN;

a = sqrt(i);
b = sqrt(j);
c = sqrt(k);
d = sqrt(l);

printf("sqrt(INFINITY): %f\n",a);
printf("sqrt(NAN): %f\n",b);
printf("sqrt(-INFINITY): %f\n",c);
printf("sqrt(-NAN): %f\n",d);

return 0;
}