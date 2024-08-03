// Gauss Elimination Method (Lab 11)

#include <stdio.h>
#include <math.h>
#define SIZE 10

int main() {
    float a[SIZE][SIZE + 1], x[SIZE], ratio;
    int i, j, k, n;

    printf("Enter number of unknowns (max %d): ", SIZE);
    scanf("%d", &n);

    // Input Augmented Matrix
    printf("Enter the elements of the Augmented matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n + 1; j++) {
            printf("a[%d][%d] = ", i + 1, j + 1);
            scanf("%f", &a[i][j]);
        }
    }

    // Perform Gaussian Elimination
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            ratio = a[j][i] / a[i][i];
            for (k = i; k < n + 1; k++) {
                a[j][k] = a[j][k] - ratio * a[i][k];
            }
        }
    }

    // Display Upper Triangular Matrix
    printf("\nThe Upper Triangular Matrix is:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n + 1; j++) {
            printf("%.2f\t", a[i][j]);
        }
        printf("\n");
    }

    // Back Substitution
    x[n - 1] = a[n - 1][n] / a[n - 1][n - 1];
    for (i = n - 2; i >= 0; i--) {
        x[i] = a[i][n];
        for (j = i + 1; j < n; j++) {
            x[i] = x[i] - a[i][j] * x[j];
        }
        x[i] = x[i] / a[i][i];
    }

    // Display Solution
    printf("\nSolution:\n");
    for (i = 0; i < n; i++) {
        printf("x[%d] = %0.3f\n", i + 1, x[i]);
    }

    return 0;
}
