#include<stdio.h>
void matrixTraverse();
int count();
int main()
{
	int m,n,a[50][50];
	printf("Enter the values of m n : ");
	scanf("%d %d",&m,&n);
	matrixTraverse(a,m,n);
}
int count(x,y)
{
	int c=0;
	if(x==0||y==0)
		c=c+1;
	else
		c=(count(x-1,y))+(count(x,y-1))+(count(x-1,y-1));
	return c;
	
}
void matrixTraverse(int a[50][50],int m,int n)
{
	int d;
	d=count(m-1,n-1);
	printf("%d",d);	
}
