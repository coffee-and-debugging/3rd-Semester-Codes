// Newton Raphson's Method(Lab 8)
#include<stdio.h>
#include<math.h>
float f(float a);
float y(float a);
int main()
{
	float a;
	int i=0;
	printf("Enter Initial Guess:");
	scanf("%f",&a);
	printf("\nS.N\t Guess\t\t F(a)\t \tY(a)\n");
	printf("%d\t %f\t %f\t %f\n",i,a,f(a),y(a));
	do
	{
		a=a-f(a)/y(a);
		printf("%d\t %f\t %f\t %f\n",i+1,a,f(a),y(a));
		i++;
	}while(fabs(f(a))>=0.0001);
	printf("Number of Iterations are:%d\n",i);
	printf("Root is %.4f\n",a);
	return 0;
}
float f(float a)
{
	return(a*a*a-3*a-10); // The Function is a^3-3a-10
}
float y(float a)
{
	return(3*a*a-3); // The 1st Derivative of Function is 3a^2-3
}
