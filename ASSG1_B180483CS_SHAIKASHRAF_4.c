#include<stdio.h>
void majority(int a[],int n)
{
	int max=0,b,i,j;
	for(i=0;i<n;i++)
	{
		int count=0;
		for(j=0;j<n;j++)
		{
			if (a[i]==a[j])
				count++;
			
		}
		if (count>max)
		{
			max=count;
			b=i;
		}
	}
	if(max>n/2)
		printf("%d",a[b]);
	else 
		printf("-1/ No Majority element");
}
void main ()
{
	int a[50],n,c,i;
	printf("Enter number of elements in the array: ");
	scanf("%d",&n);
	printf("Enter the array : ");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	majority(a,n);
}
