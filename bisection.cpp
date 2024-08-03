// Bisection Method(Lab 5)
#include <stdio.h>
#include <math.h>
float f(float x)
{
    return (pow(x, 3) - 9 * pow(x, 2) - 10); // x^3 - 9x^2 - 10 is the function
}

int main()
{
    int i = 0;
    float x1, x2, x3;

    printf("\nEnter Initial Approximations: ");
    scanf("%f %f", &x1, &x2);

    if (f(x1) * f(x2) > 0)
    {
        printf("\nNo solution exists in this approximation.\n");
    }
    else
    {
        printf("S.N\t X1\t\t f(x1)\t\t X2\t \tf(x2)\t \tX3\t\t f(x3)\n");
        do
        {
            i++;
            x3 = (x1 + x2) / 2;
            printf(" %d\t %f\t %f\t %f\t %f\t %f\t %f\n", i, x1, f(x1), x2, f(x2), x3, f(x3));

            if (f(x3) * f(x1) > 0)
                x1 = x3;
            else
                x2 = x3;
        } while (fabs(f(x3)) > 0.001);
    }
    printf("\nThe Required Root is %.4f",x3);
    return 0;
}
