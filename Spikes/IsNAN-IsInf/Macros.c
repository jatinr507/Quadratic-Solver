// Spike for isNAN an isINF
#include <stdio.h>
#include <math.h>
#include <float.h>
 
int main(void)
{
    printf("isnan(NAN)         = %d\n", isnan(NAN));
    printf("isnan(INFINITY)    = %d\n", isnan(INFINITY));
    printf("isnan(0.0)         = %d\n", isnan(0.0));
    printf("isnan(0.0/2.0)     = %d\n", isnan(0.0/2.0));
    printf("isnan(0.0 / 0.0)   = %d\n", isnan(0.0/0.0));
    printf("isnan(Inf - Inf)   = %d\n", isnan(INFINITY - INFINITY));
    printf("\n");
    printf("isinf(NAN)         = %d\n", isinf(NAN));
    printf("isinf(INFINITY)    = %d\n", isinf(INFINITY));
    printf("isinf(0.0)         = %d\n", isinf(0.0));
    printf("isinf(0.0/2.0)     = %d\n", isinf(0.0/2.0));
    printf("isinf(0.0/0.0)     = %d\n", isinf(0.0/0.0));
    printf("isinf(1.0)         = %d\n", isinf(1.0));
    printf("isinf(exp(800))    = %d\n", isinf(exp(800)));
}