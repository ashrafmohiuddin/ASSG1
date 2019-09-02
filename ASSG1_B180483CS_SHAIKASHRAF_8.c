#include<stdio.h>
void perf(int n)
{
        int i,a=0;
        for (i=1;i<n;i++)
                if (n%i==0)
                        a+=i;
        if (a==n)
                printf("%d is a perfect number",n);
        else
                printf("%d is not a perfect number",n);

}
void main()
{
        int n;
        printf("Enter the number : ");
        scanf("%d",&n);
        perf(n);
}
                               
