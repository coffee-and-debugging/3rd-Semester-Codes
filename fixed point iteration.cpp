// Fixed Point Iteration Method(Lab 9)
#include<stdio.h>
#include<math.h>
float f(float x)
{
	return(pow(x,3)-9*pow(x,2)-10);
}
float g(float x)
{
	float r=9*x*x+10;
	float s=(float)1/3;
	return pow(r,s);
}
int main()
{
	int i=0;
	float xo,x1;
	printf("Enter Initial Approximation:");
	scanf("%f",&xo);
	printf("\nS.N\t X0\t \tx1");
	do
	{
		i++;
		x1=g(xo);
		printf("\n%d\t %f\t %f",i,xo,x1);
		xo=x1;
	}while(fabs(f(x1))>0.001);
	printf("\n Root of Equation is:%f",x1);
	return 0;
}
