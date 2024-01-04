#include<stdio.h>
void main()
{
    int n,i;
    int sum=0;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=1;i<=2*n;i++)
    {
        if(i%2!=0)
        {
            sum=sum+i;
        }
    }
    printf(" sum of odd natural number : %d",sum);
}
