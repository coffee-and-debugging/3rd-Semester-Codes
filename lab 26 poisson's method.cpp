// Poisson's Method (LAB 26)

#include <stdio.h>
#include <math.h>

#define g(x, y) 2 * (x) * (x) * (y) * (y)

int main() {
    int n, i, j, k;
    float sum, error, E[10], a[10][10], b[10], new_x[10], old_x[10], tl, tr, tu, tb, h;
    
    printf("Enter Dimension of Plate:");
    scanf("%d", &n);
    
    printf("Enter Dimesion of Grid:");
    scanf("%f", &h);
    
    printf("Enter Temperatures at Left, Right, Bottom, Top of Plate:");
    scanf("%f %f %f %f", &tl, &tr, &tb, &tu);
    
    for (i = 0; i <= n; i++) {
        for (j = 0; j <= n; j++) {
            if (i == j) {
                a[i][j] = -4;
            } else if (j == n) {
                a[i][j] = 0;
            } else {
                a[i][j] = 1;
            }
        }
    }
    
    k = 0;
    for (i = 1; i < n; i++) {
        for (j = 1; j < n; j++) {
            b[k++] = h * h * g(i, j);
        }
    }
    
    k = 0;
    for (i = 1; i < n; i++) {
        for (j = 1; j < n; j++) {
            if ((i - 1) == 0)
                b[k] = b[k] - tl;
            if ((i + 1) == n)
                b[k] = b[k] - tr;
            if ((j - 1) == 0)
                b[k] = b[k] - tb;
            if ((j + 1) == n)
                b[k] = b[k] - tu;
            k++;
        }
    }
    
    printf("Enter Accuracy Limit:");
    scanf("%f", &error);
    
    for (i = 0; i <= n; i++) {
        new_x[i] = 0;
    }
    
    while (1) {
        for (i = 0; i <= n; i++) {
            sum = b[i];
            for (j = 0; j <= n; j++) {
                if (i != j)
                    sum = sum - a[i][j] * new_x[j];
            }
            old_x[i] = new_x[i];
            new_x[i] = sum / a[i][i];
            if (old_x[i] != 0) {
                E[i] = fabs(new_x[i] - old_x[i]) / fabs(old_x[i]);
            } else {
                E[i] = fabs(new_x[i] - old_x[i]);
            }
        }
        
        int converged = 1;
        for (i = 0; i <= n; i++) {
            if (E[i] > error) {
                converged = 0;
                break;
            }
        }
        
        if (converged)
            break;
    }
    
    printf("Solution:\n");
    for (i = 0; i <= n; i++) {
        printf("X %d = %6.2f\n", i + 1, new_x[i]);
    }
    
    return 0;
}

