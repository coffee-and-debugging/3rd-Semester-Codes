// Gauss Jordan (Lab 7)
#include<stdio.h>
int main()
{
	float m[3][4]={2,8,2,14,1,6,-1,13,2,-1,2,5},t;
	int i,j,k;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i!=j)
			{
				t=m[j][i]/m[i][i];
				for(k=0;k<4;k++)
				{
					m[j][k]-=(t*m[i][k]);
				}
			}
		}
	}
	printf("Matrix is:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%.3f\t",m[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		printf("\n The Solution is:%.3f\t",m[i][3]/m[i][i]);
	}
	return 0;
}
