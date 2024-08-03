// Heun's Method(LAB 22)
#include<stdio.h>
#define f(x,y) 2*y/x
int main()
{
	float x,y,h,xn,z;
	printf("Program For Solution of Ordinary Differential Equation in Heun's Method\n");
	printf("Enter Value For X & Y:");
	scanf("%f %f",&x,&y);
	printf("Enter Value  For H And Last of X:");
	scanf("%f %f",&h,&xn);
	while(x+h<=xn)
	{
		z=(h/2)*(f(x,y)+f(x+h,y+h*f(x,y)));
		y=y+z;
		x=x+h;
		printf("Y=%f\t X=%f\n",y,x);
	}
	return 0;
}
