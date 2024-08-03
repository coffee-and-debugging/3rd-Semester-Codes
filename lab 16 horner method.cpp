// Horner's Method (LAB 16)
#include <stdio.h>

int main() {
    float a[100], sum = 0, x;
    int n, i;

    printf("Enter the degree of the polynomial: ");
    scanf("%d", &n);

    printf("Enter coefficients of the polynomial:\n");
    for (i = n; i >= 0; i--) {
        printf("Enter coefficient of [X^%d]: ", i);
        scanf("%f", &a[i]);
    }

    printf("Enter the value of x: ");
    scanf("%f", &x);

    sum = a[n];  

    for (i = n - 1; i >= 0; i--) {
        sum = sum * x + a[i];  
    }

    printf("The value of the polynomial is: %f\n", sum);

    return 0;
}
