#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, determinant, x1,x2, realPart, imaginaryPart;

    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf",&a, &b, &c);

    determinant = b*b-4*a*c;

    // condition for real and different roots
    if (determinant > 0)
    {
    // sqrt() function returns square root
        x1 = (-b+sqrt(determinant))/(2*a);
        x2 = (-b-sqrt(determinant))/(2*a);
        printf("root1 = %.2lf and root2 = %.2lf",x1 , x2);
    }

    //condition for real and equal roots
    else if (determinant == 0)
    {
        x1 = root2 = -b/(2*a);
        printf("root1 = root2 = %.2lf;", x1);
    }

    // if roots are not real 
    else
    {
        realPart = -b/(2*a);
        imaginaryPart = sqrt(-determinant)/(2*a);
        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imaginaryPart, realPart, imaginaryPart);
    }

    return 0;
}   