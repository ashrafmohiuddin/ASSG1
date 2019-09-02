#include<stdio.h>
int fun(int a[],int n)
{
	int max=0,ind,i,prev=-1,last=-1;
	for (i=0;i<n;i++)
	{
		if (a[i]==0)
		{
			if (i-last>max)
			{
				max=i-last;
				ind=prev;
			}
			last=prev;
			prev=i;
		}
	}
	if (n-last>max)
		ind=prev;
	return ind;
}
int main()
{
	int a[50],n,c,i;
	printf("Enter number of elements in the array: ");
	scanf("%d",&n);
	printf("Enter the array : ");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	c=fun(a,n);
	printf("Position : %d",c);

}
