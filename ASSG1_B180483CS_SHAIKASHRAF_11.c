#include<stdio.h>
#include<string.h>

void add_employee();
void disp_info_1();
void disp_info_2();
void disp_info_3();
struct lib
{
 	char name[20];
 	int salary;
	int work_hrs;
}b[100];
int count;
main()
{
	int ch;
 	while(1)
 	{
  		printf("\n 1:Add an employee record\n");
  		printf("\n 2:Display the details of all the employees who did not get increment in salary \n");
  		printf("\n 3:Display the details of all the employees with their final salaries \n");
  		printf("\n 4:Display the details of all the employees,given work per day (in hours) \n");
  		printf("\n 5:exit\n");
  		printf("\n Enter the choice : ");
  		scanf("%d",&ch);
  		switch(ch)
  		{
   		case 1:
    		add_employee();
    		break;
   		case 2:
    		disp_info_1();
  		    break;
   		case 3:
    		disp_info_2();
    		break;
    	case 4:
    		disp_info_3();
    		break;
   		case 5:
    		return 0;
    	default:
    		printf("Wrong input");
    		return 0;
 		}
 	}
}
void add_employee()
{
	char none[20];
	gets(none);
  	printf("\n Enter name of the employee = ");	
 	gets(b[count].name);
 	printf("\n Enter salary of the employee =");
 	scanf("%d",&(b[count].salary));
 	printf("\n Enter work hours of the employee =");
 	scanf("%d",&(b[count].work_hrs));
 	count++;	
}

void disp_info_1()
{
	int i;
		for(i=0;i<count;i++)
 	{
 		if(b[i].work_hrs<8)
  			printf("\n %s\n%d\n%d",b[i].name,b[i].salary,b[i].work_hrs);
  		else 
  			printf("No employee exists without salary increment");
 	}	
}

void disp_info_2()
{
	int i;
 	for(i=0;i<count;i++)
 	{
 		if(b[i].work_hrs<8)
  			printf("\n %s\n%d\n%d",b[i].name,b[i].salary,b[i].work_hrs);
  		else if(b[i].work_hrs>=8 && b[i].work_hrs<10){
  			b[i].salary+=50;
  			printf("\n %s\n%d\n%d",b[i].name,b[i].salary,b[i].work_hrs);}
  		else if(b[i].work_hrs==10){
  			b[i].salary+=100;
  			printf("\n %s\n%d\n%d",b[i].name,b[i].salary,b[i].work_hrs);}
 		else {
 			b[i].salary+=150;
  			printf("\n %s\n%d\n%d",b[i].name,b[i].salary,b[i].work_hrs);}
	}
}
void disp_info_3()
{
	int i,cnt=0;
 	int c;
 	printf("\n Enter the work per day(in hours) = ");
 	scanf("%d",&c);
 	for(i=0;i<count;i++)
 	{
 	 	if(b[i].work_hrs==c)
 		{
   			cnt++;
  			printf("\n %s\n%d\n%d",b[i].name,b[i].salary,b[i].work_hrs);
  		}
 	}
 	if(cnt==0)
  		printf("\n No such employee \n");
}

