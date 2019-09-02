#include <stdio.h>
void main()
{
	float i,n,j,k,l;
	printf("Enter the number : ");
	scanf("%f",&n);
	for (i=0;(i*i)<n;i++);
	for(j=i-1;(j*j)<n;j+=0.1);
	for(k=j-0.1;(k*k)<n;k+=0.01);
	for(l=k-0.01;(l*l)<n;l+=0.001);
	printf("%.3f",l);
	
}
