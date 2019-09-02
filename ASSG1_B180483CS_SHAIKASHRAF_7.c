#include<stdio.h>
#include<math.h>
void main()
{
	int b,i,sum=0;
	printf("Enter the binary number : ");
	scanf("%d",&b);
	for(i=0;b!=0;b=b/10)
		sum+=b%10*pow(2,i++);
	printf("The decimal number is %d",sum);		
}
