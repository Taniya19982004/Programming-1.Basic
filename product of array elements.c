#include<stdio.h>
void main()
{
    int a[60];
    int x ,product=1,i;
    printf("enter a number");
    scanf("%d",&x);
    printf("enter a array element");
    for(i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
    }
    for( i=0;i<x;i++)
    {
        product=product*a[i];

    }
    printf("product of the number is %d",product);
}

