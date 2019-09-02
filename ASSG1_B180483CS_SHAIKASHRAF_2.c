#include<stdio.h>
void *rotate(int a[50],int n,int k)
{
        int j,c,i;
        for (i=0;i<k;i++)
        {
            c=a[n-1];
            for(j=n-1;j>0;j--)
                a[j]=a[j-1];
            a[0]=c;
        }
	return a;
}
void main()
{
	int i,n,k,l;
	int a[50];
	int *arr;
	printf("Enter the value of n and k : ");
	scanf("%d%d",&n,&k);
	if(k>n)
		k=k%n;
	printf("Enter the array : ");
	for (i=0;i<n;i++)
        scanf("%d",&a[i]);
	arr=rotate(a,n,k);
	for(l=0;l<n;l++)
        printf("%d ",arr[l]);
}
          
