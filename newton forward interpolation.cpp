// Newton Forward Interpolation Method(Lab 13)
#include<stdio.h> 
 # define N 15
 int fact (int n)
  {
 if (n == 0 || n == 1)
 return 1;
 else
 return  n*fact (n-1);
}
 int main()
{
	float x[N], y[N][N], X, res = 0, P, h, v;
int i, j, n;
printf ("Enter the no of terms: ");
 scanf("%d", &n);
 for (i=0; i<n; i++)
 { 
  printf("Enter %d term x and y value: ", i); 
   scanf("%f%f", &x[i], &y [i][0]);
}
printf("Enter the value of a for which f(x) is to be calculated: ");
 scanf ("%f", &X);
 h=x[1]-x[0];
 P= (X-x[0])/h;
 for (i=1; i < n; i++)
 {
 for (j=0; j <n-1; j++)
  y[j] [i] = y [j+1] [i - 1] - y [j] [i-1];
}
 for (i=0; i<n; i++)
  {
 printf ("%.2f\t", x[i]);
 for (j=0; j <n-i; j++)
 printf("%.2f\t", y[i][j]);
printf("\n");
} 
res = y [0][0];
 for (i=1; i<n; i++)
 {
  v=P;
for (j=1; j <= i- 1 ; j++)
{
 v = v * (P-j);
 }
 res = res + (v*y[0][i] / fact (i));
}
 printf("value of  f(%.2f): % .3f",X, res); 
  }
