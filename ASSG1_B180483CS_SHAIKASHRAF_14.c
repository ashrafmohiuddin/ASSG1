#include<stdio.h>
void reverse(char *str)
{
	if(*str)
	{
		reverse(str+1);
		printf("%c",*str);
		
	}
}
void main()
{
	char s[50];
	printf("enter the string : ");
	gets(s);
	reverse(s);
	
}
