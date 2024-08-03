// Jacobi Method (Lab 6)
 #include <stdio.h> 
 #include <math.h> 
  float fx (float, float);
 float fy (float, float);
 float fz( float, float);
 int main()
 {
  float x=0, y = 0, z=0, xn, yn, zn ;
   int n, i;
 printf("enter no of iteration:"); 
  scanf("%d", &n);
 for (i=1; i <= n; i++)
{
xn=fx(y,z);
 yn = fy (x,z); 
  zn = fz (x,y);
 x=xn;
 y=yn;
z=zn;
}
 printf ("\nThe Value of X is:%.4f \nThe Value of Y is:%.4f \nThe Value of Z is:%.4f", x, y, z);
return 0;
}
 float fx (float y, float z)
 {
 	return ((-1+2*y-3*z)/5);
 }
  float fy (float x, float z){
  	return ((2+3*x-z)/9);
  }
 float fz (float x, float y) {
 return ((2*x-y-3)/7);
}
