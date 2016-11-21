// Spike for dividing by infinity and NAN
#include <stdio.h>
#include <math.h>

int main() {

double x = INFINITY;
double y = NAN;

double z = x/x;
double a = x/y;
double b = y/x;

printf("Infinity: %lf\n", x);
printf("Nan: %lf\n", y);
printf("Infinity divided by infinity: %lf\n", z);
printf("Infinity divided by Nan: %lf\n", a);
printf("Nan divided by infinity: %lf\n", b);

return 0;
}
