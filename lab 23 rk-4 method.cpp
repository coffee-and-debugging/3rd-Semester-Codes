// Runge-Kutta 4 Method (LAB 23)
#include<stdio.h>
#include<math.h>
float f(float x,float y);
int main()
{
	float x0,y0,m1,m2,m3,m4,m,y,x,h,xn;
	printf("Enter X0,Y0,Xn,H:");
	scanf("%f %f %f %f",&x0,&y0,&xn,&h);
	x=x0;
	y=y0;
	printf("\n\n X\t\t Y\n");
	while(x<xn)
	{
		m1=f(x0,y0);
		m2=f((x0+h/2),(y0+m1*h/2));
		m3=f((x0+h/2),(y0+m2*h/2));
		m4=f((x0+h),(y0+m3*h));
		m=((m1+2*m2+2*m3+m4)/6);
		y=y+m*h;
		x=x+h;
		printf("%f\t %f\n",x,y);
	}
	return 0;
}
float f(float x,float y)
{
	float m;
	m=(x-y)/(x+y);
	return m;
}
