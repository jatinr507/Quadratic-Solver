#include <stdio.h>
#include <stdlib.h>
#include <float.h>
#define FLT_MAX     __FLT_MAX__
#define FLT_TRUE_MIN __FLT_MIN__
int main(int argc, char** argv) {
    float floatMin = FLT_TRUE_MIN;
    float floatMax = FLT_MAX;
    //These are the max and min values for floating point in c
    printf("FloatingMin: %.9g\n",floatMin);
    printf("FloatingMax: %.9g\n",floatMax);
    // Add small number to max...
    printf("FloatingMax + 10.0 = %.9g\n",floatMax + 10.0);
    // Subtract a small number from min...
    printf("FloatingMin - 10.0 = %.9g\n",floatMin - 10.0);
    //Adding a large number to max...
    printf("FloatingMax + FloatingMax = %.9g\n",floatMax + floatMax);
    //Subtracting a large number from min
    printf("FloatingMin - 2*FloatingMax = %.9g\n",floatMin - (2*floatMax));
    return (EXIT_SUCCESS);
}
