// Gaussian Integration ( 2 Point Formula) (LAB 19)
#include <stdio.h>
#include <conio.h>
#include <math.h>

void GaussLegendre(float, float, int);
float f(float x) {
    return (exp(x)); // This is The Function e^x
}
float g(float a, float b, float z) {
    float x = (b - a) / 2 * z + (b + a) / 2;
    return (exp(x));
}

int main() {
    float a, b;
    int n;
    printf("Enter A(Lower Limit) & B(Upper Limit):");
    scanf("%f %f", &a, &b);
    INPUT:
    printf("Press 2 To Solve Using 2 Point Formula\n");
    printf("Press 3 To Solve Using 3 Point Formula\n");
    printf("Press 4 To Solve Using 4 Point Formula\n");
    scanf("%d", &n);
    switch (n) {
        case 2:
            printf("Using 2 Point Formula:\n");
            GaussLegendre(a, b, n);
            break;
        case 3:
            printf("Using 3 Point Formula:\n");
            GaussLegendre(a, b, n);
            break;
        case 4:
            printf("Using 4 Point Formula:\n");
            GaussLegendre(a, b, n);
            break;
        default:
            printf("INVALID\n");
            goto INPUT;
    }
     getch();
}

void GaussLegendre(float a, float b, int n) {
    float I;
    
    if (a == -1 && b == 1) {
        if (n == 2) {
            I = 1.0 * f(-1.0 / sqrt(3)) + 1.0 * f(1.0 / sqrt(3));
            printf(" I=%f", I);
        }
        if (n == 3) {
            I = 5.0 / 9.0 * f(-sqrt(3.0 / 5.0)) + 8.0 / 9.0 * f(0) + 5.0 / 9.0 * f(sqrt(3.0 / 5.0));
            printf(" I=%f", I);
        }
        if (n == 4) {
            I = 0.34785 * f(-0.86114) + 0.65215 * f(-0.33998) + 0.65215 * f(0.33998) + 0.34785 * f(0.86114);
            printf(" I=%f", I);
        }
    } else {
        if (n == 2) {
            I = (b - a) / 2 * (1 * g(a, b, -1.0 / sqrt(3)) + 1 * g(a, b, 1.0 / sqrt(3)));
            printf(" I=%f", I);
        }
        if (n == 3) {
            I = (b - a) / 2 * (5.0 / 9.0 * g(a, b, -sqrt(3.0 / 5.0)) + 8.0 / 9.0 * g(a, b, 0) + 5.0 / 9.0 * g(a, b, sqrt(3.0 / 5.0)));
            printf(" I=%f", I);
        }
        if (n == 4) {
            I = (b - a) / 2 * (0.34785 * g(a, b, -0.86114) + 0.65215 * g(a, b, -0.33998) + 0.65215 * g(a, b, 0.33998) + 0.34785 * g(a, b, 0.86114));
            printf(" I=%f", I);
        }
    }
}
