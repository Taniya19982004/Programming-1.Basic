#include<stdio.h>
void main()
{
    int n,y,r,x;
    printf("enter a number");
    scanf("%d",&n);
    x=n;
    while(n!=0)
    {
        r=n%10;

        y=y+(r*r*r);

        n=n/10;

    }
     if(y==x)
        {
            printf(" armstrong number");
        }
        else
        {
            printf("not armstrong number");
        }

}
