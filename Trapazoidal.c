#include<stdio.h>
float y(float x){
	return 1/(x);
}
main(){
	float x0,xn,h,s;
	int i,n;
	printf("Enter x0, xn, no. of sub intervals: ");
	scanf("%f %f %d", &x0, &xn, &n);
	h=(xn-x0)/n;
	s=y(x0) + y(xn);
	
	for(i=1;i<=n-1;i++){
		s += 2*y(x0+i*h);
		
	}
	printf("value of integral is % 6.4f\n", (h/2)*s);
}
