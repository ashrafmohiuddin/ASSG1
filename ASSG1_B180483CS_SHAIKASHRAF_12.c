#include<stdio.h>
void add(int a,int b)
{
	printf("%d",a+b);
}
void sub(int a,int b)
{
	printf("%d",a-b);
}
void mul(int a,int b)
{
	printf("%d",a*b);
}
int main ()
{
	printf("(1)Addition of numbers\n");
	printf("(2)Subtraction of numbers\n");
	printf("(3)Multiplication of numbers\n");
	printf("(4)Exit\n");	
	int n,a,b;
	void (*ptr_arr[])(int,int)={add,sub,mul};
	printf("Enter your choice : ");
	scanf("%d",&n);
	if (n<1||n>4)
	{
		printf("Invalid Input");
		return 0;
	}
	else
	{
		printf("Enter the values of a and b : ");
		scanf("%d %d",&a,&b);
		(*ptr_arr[n-1])(a,b);
	}
}

