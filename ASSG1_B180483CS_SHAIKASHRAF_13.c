#include<stdio.h>
#include<string.h>

void add_book();
void disp_book();
void book_auth();
void count_book();
void title();
void status();

struct lib
{
 	char acc_no[20];
 	char book_title[20];
 	char author[20];
 	char status[20];
}b[100];
int count;
main()
{
	int ch;
 	while(1)
 	{
  		printf("\n 1:Add a new book\n");
  		printf("\n 2:Display book information\n");
  		printf("\n 3:Display all the books in the library of a particular author\n");
  		printf("\n 4:Display the number of books with a particular title\n");
  		printf("\n 5:Display total number of books in the library\n");
  		printf("\n 6:Issue a book\n");
 		printf("\n 7:exit\n");
  		printf("\n Enter the choice : ");
  		scanf("%d",&ch);
  		char none[20];
		gets(none);
  		switch(ch)
  		{
   		case 1:
    		add_book();
    		break;
   		case 2:
    		disp_book();
  		    break;
   		case 3:
    		book_auth();
    		break;
    	case 4:
    		title();
    		break;
   		case 5:
    		count_book();
    		break;
    	case 6:
    		status();
    		break;
   		case 7:
    		return 0;
    	default:
    		printf("Wrong input");
    		return 0;
 		}
 	}
}
void add_book()
{
  	printf("\n Enter accession number of book =");	
 	gets(b[count].acc_no);
 	printf("\n Enter the book title=");
 	gets(b[count].book_title);
 	printf("\n Enter the name of author=");
 	gets(b[count].author);
 	printf("\n Enter the status of book=");
 	gets(b[count].status);
 	count++;	
}

void disp_book()
{
	int i;
 	printf("\n Details of %d books in library",count);
	for(i=0;i<count;i++)
 	{
  		printf("\n %s\n%s\n%s\n%s",b[i].acc_no,b[i].book_title,b[i].author,b[i].status);
 	}
}
void book_auth()
{
 	int i,cnt=0;
 	char name[20];
 	printf("\n Enter the name of author=");
 	gets(name);
 	for(i=0;i<count;i++)
 	{
 	 	if(strcmp(name,b[i].author)==0)
 		{
   			cnt++;
   			printf("\n %s\n%s\n%s\n%s",b[i].acc_no,b[i].book_title,b[i].author,b[i].status);
  		}
 	}
 	if(cnt==0)
  		printf("\n No such book \n");
}
void title()
{
	int i,cnt=0;
 	char name[20];
 	printf("\n Enter the title of book = ");
 	gets(name);
 	for(i=0;i<count;i++)
 	{
 	 	if(strcmp(name,b[i].book_title)==0)
 		{
   			cnt++;
   			printf("%d",cnt);
  		}
 	}
 	if(cnt==0)
  		printf("\n No such book \n");
}
void status()
{
	char name[20];
	int i,n;
	printf("\n Enter the accession number of the book : ");
	gets(name);
	for(i=0;i<n;i++)
	{
		if(strcmp(name,b[i].acc_no)==0)
		{
			strcpy(b[i].status,"Issued");
			count--;
		}
	}
	
}
void count_book()
{
 	printf("\n total no of book in library =%d",count);
}

