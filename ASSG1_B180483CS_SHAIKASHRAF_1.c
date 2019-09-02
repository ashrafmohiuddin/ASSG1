#include<stdio.h>
void main()
{
	int a[50];
	int n,i,j,first,last,max,sum=0;
	printf("Size of the array(n) ");
	scanf("%d",&n);
	printf("Enter the elements of array : ");
	for (i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			sum+=a[j];
			if (max<sum)
			{
				max=sum;
				first=i;
				last=j;
			}
		}
		sum=0;
	}
	printf("The Largest Sum is %d and the subset index begins at %d and ends at %d",max,first,last);
}
