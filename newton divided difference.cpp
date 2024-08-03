// Newton's Divided Difference Method(Lab 12)
#include<stdio.h>
#include<math.h>
#include<conio.h>
int fact(int n)
{
	if(n=0||n==1)
	return 1;
	else
	return (n*fact(n-1));
}
int main()
{
	float x[10],y[10][10],sum,X,u,temp;
	int i,n,j,k=0,f,m;
	printf("How Many Record You Will Be Enter:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter The Value of x%d and y%d:",i,i);
		scanf("%f%f",&x[i],&y[0][i]);
	}
	printf("Enter X For Finding f(x):");
	scanf("%f",&X);
	for(i=1;i<n;i++)
	{
		k=i;
		for(j=0;j<n-1;j++)
		{
			y[i][j]=(y[i-1][j+1]-y[i-1][j])/(x[k]-x[j]);
			k++;
		}
	}
	printf("\nx(i)\t y(i)\n");
	for(i=0;i<n;i++)
	{
		printf("%.3f",x[i]);
		for(j=0;j<n-1;j++)
		{
			printf("   ");
			printf("%.3f",y[j][i]);
		}
		printf("\n");
	}
	i=0;
	do{
		if(x[i]<X && X<x[i+1])
		k=1;
		else
		i++;
	}while(k!=1);
	f=i;
	sum=0;
	for(i=0;i<n-1;i++)
	{
		k=f;
		temp=1;
		for(j=0;j<i;j++)
		{
			temp=temp*(X-x[k]);
			k++;
		}
		sum=sum+temp*(y[i][f]);
	}
	printf("\n \n f(%.2f)=%f",X,sum);
	getch();
}
