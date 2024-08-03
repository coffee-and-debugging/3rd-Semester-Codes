// Least Square Linear (Line) Fitting (LAB 17)
#include<stdio.h>
#include<conio.h>
#define S 50
int main()
{
	int n,i;
	float x[S],y[S],sumX=0,sumX2=0,sumY=0,sumXY=0,a,b;
	printf("How Many Data points??:\n");
	scanf("%d",&n);
	printf("Enter Data:\n");
	for(i=1;i<=n;i++)
	{
		printf("x[%d]=",i);
		scanf("%f",&x[i]);
		printf("y[%d]=",i);
		scanf("%f",&y[i]);
	}
	for(i=1;i<=n;i++)
	{
		sumX=sumX+x[i];
		sumX2=sumX2+x[i]*x[i];
		sumY=sumY+y[i];
		sumXY=sumXY+x[i]*y[i];
	}
	b=(n*sumXY-sumX*sumY)/(n*sumX2-sumX*sumX);
	a=(sumY-b*sumX);
	printf("Values Are: a=%0.2f and b=%0.2f",a,b);
	printf("\n Equation of Best fit is: y=%0.2f+%0.2fx",a,b);
	getch();
	return 0;
}
