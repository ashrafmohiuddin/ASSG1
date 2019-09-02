#include<stdio.h>
int sum();
int count_num();
void main()
{
	int a[50];
	int i,n;
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	printf("Enter the elements : ");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	sum(a,n);
}
int sum(int *a,int n)
{
	int i,sum=0;
	int b[n],j=0;
	for(i=0;i<n;i++)
	{
		if(count_num(*(a+i))==4)
		{
			if ((*(a+i))%2==0)
			{
				sum+=(*(a+i));
				b[j]=(*(a+i));
				j++;
			}
		}
	}
	printf("the sum is:");
	printf("%d",b[0]);
	for(i=1;i<j;i++)
	{
		printf("+%d",b[i]);
	}
	
	printf("=%d",sum);
}

int count_num(int k)
{
	int c=0;
	while(k!=0)
	{
	
		k=k/10;
		c=c+1;}
	return c;	
}
