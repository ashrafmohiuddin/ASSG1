#include<stdio.h>
#include<string.h>
void main()
{
	char s1[100],s2[100];
	printf("Enter the String : ");
	gets(s1);
	printf("Enter the Substring : ");
	gets(s2);
	if(strstr(s1,s2))
		printf("The Substring %s is present.",s2);
	else 
		printf("The Substring %s is not present.",s2);
		
}

