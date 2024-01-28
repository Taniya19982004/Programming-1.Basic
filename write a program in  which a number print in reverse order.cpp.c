#include<stdio.h>
int main()
{
    int n,r,reverse_num=0;
    int is_trailing_zero;
    printf("enter a number more than one digit ");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        if(r==0)
        {
            printf("0");
        }
        else
        {
            printf("%d",r);
        }
        reverse_num=reverse_num*10+r;
        n/=10;


    }
    return 0;

}
