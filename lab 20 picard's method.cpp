// Picard's Method(LAB 20)
#include<stdio.h>
#include<math.h>
#define Y1(x) (1+(x)+pow(x,2)/2)
#define Y2(x) (1+(x)+pow(x,2)/2+pow(x,3)/3+pow(x,4)/8)
#define Y3(x) (1+(x)+pow(x,2)/2+pow(x,3)/3+pow(x,4)/8+pow(x,5)/15+pow(x,6)/48)

int main()
{
	double start_value,end_value,allowed_error,temp;
	double y1[30],y2[30],y3[30];
	int count;
	printf("Enter Start Value:");
	scanf("%lf",&start_value);
	printf("Enter End Value:");
	scanf("%lf",&end_value);
	printf("Enter Allowed Error:");
	scanf("%lf",&allowed_error);
	for(temp=start_value,count=0;temp<=end_value;temp=temp+allowed_error,count++)
	{
		y1[count]=Y1(temp);
		y2[count]=Y2(temp);
		y3[count]=Y3(temp);
	}
	printf("\n X\n");
	for(temp=start_value;temp<=end_value;temp=temp+allowed_error)
	{
		printf("%.4lf\t",temp);
	}
	printf("\n\n Y(1)\n");
	for(temp=start_value,count=0;temp<=end_value;temp=temp+allowed_error,count++)
	{
		printf("%.4lf\t",y1[count]);
	}
	printf("\n\nY[2]\n");
	for(temp=start_value,count=0;temp<=end_value;temp=temp+allowed_error,count++)
	{
		printf("%.4lf\t",y2[count]);
	}
	printf("\n\n Y[3]\n");
	for(temp=start_value,count=0;temp<=end_value;temp=temp+allowed_error,count++)
	{
		printf("%.4lf\t",y3[count]);
	}
	return 0;
}
