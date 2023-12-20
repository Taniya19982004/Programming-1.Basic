#include<stdio.h>
#include<stdbool.h>
int main()
{
    int i,n;
    bool flag=false;
    printf("ENTER A NUMBER");
    scanf("%d",&n);
    for(i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
            flag=true;
            printf("NOT prime number");
            break;

        }
       else
       {
             printf("prime number");
             break;
       }

    }
    }
