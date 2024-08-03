#include <stdio.h>

float fx(float y, float z) { return (14 - y - 3 * z) / 5; }
float fy(float x, float z) { return (7 - 9 * z - x) / 10; }
float fz(float x, float y) { return (2 * x - 7 * y + 17) / 10; }

int main() {
    float x = 0, y = 0, z = 0;
    int n;

    printf("Enter Number of Iteration: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        x = fx(y, z);
        y = fy(x, z);
        z = fz(x, y);
    }

    printf("\n The Value of X is: %.4f \n The Value of Y is: %.4f \n The Value of Z is: %.4f", x, y, z);
}

