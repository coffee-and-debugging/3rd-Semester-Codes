// Laplace Method(LAB 25)

#include<stdio.h>
#include<math.h>

#define s 4 // Define the value of s

typedef float newvar[s + 1][s + 1];

void entrow(int i, newvar u) {
    int j;
    printf("Enter The Value of U[%d,j],J=1,%d::", i, s);
    for (j = 1; j <= s; j++)
        scanf("%f", &u[i][j]);
}

void entcol(int j, newvar u) {
    int i;
    printf("Enter The Value of U[i,%d],i=2,%d::", j, s - 1);
    for (i = 2; i <= s - 1; i++)
        scanf("%f", &u[i][j]);
}

void oput(newvar u, int wd, int prsn) {
    int i, j;
    for (i = 1; i <= s; i++) {
        for (j = 1; j <= s; j++)
            printf("%*.*f ", wd, prsn, u[i][j]); // Corrected the print format
        printf("\n");
    }
}

int main() {
    newvar u;
    float mer, ar, e, t;
    int i, j, itr, max_itr;

    for (i = 1; i <= s; i++)
        for (j = 1; j <= s; j++)
            u[i][j] = 0;

    printf("Enter The Boundary Condition:\n");
    entrow(1, u);
    entrow(s, u);
    entcol(1, u);
    entcol(s, u);

    printf("Enter The Allowed Error & Maximum Number of Iterations:");
    scanf("%f %d", &ar, &max_itr); // Corrected the input format

    for (itr = 1; itr <= max_itr; itr++) {
        mer = 0;
        for (i = 2; i <= s - 1; i++) { // Corrected the iteration range
            for (j = 2; j <= s - 1; j++) { // Corrected the iteration range
                t = (u[i - 1][j] + u[i + 1][j] + u[i][j + 1] + u[i][j - 1]) / 4.0;
                e = fabs(u[i][j] - t);
                if (e > mer)
                    mer = e;
                u[i][j] = t;
            }
        }
        printf("Iteration Number %d\n", itr);
        oput(u, 9, 2);
        
        if (mer <= ar) {
            printf("After %d Iteration\n The Solution:\n", itr);
            oput(u, 8, 1);
            return 0;
        }
    }
    
    printf("Sorry! The Number of Iterations is Not Sufficient\n");
    return 1;
}

