#include<stdio.h>
void spiralPrint(int a[50][50],int m,int n)
{
	int i,x=0,y=0;
	printf("%d ",a[0][0]);
	while (x<m && y<n)
	{
		
		for (i=1;i<n;++i)
			printf("%d ",a[x][i]);
		x++;
		for (i=x;i<m;++i)
			printf("%d ",a[i][n-1]);
		n--;
		if (x<m)
		{
			for(i=n-1;i>=y;--i)
				printf("%d ",a[m-1][i]);
			m--;	
		}
		if (y<n)
		{
			for(i=m-1;i>=x;--i)
				printf("%d ",a[i][y]);
			y++;
		}
	}
}
int main()
{
	int a[50][50];
	int m,n,i,j;
	printf("Enter the value of m and n : ");
	scanf("%d%d",&m,&n);
	printf("Enter the array\n");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	spiralPrint(a,m,n);
}
