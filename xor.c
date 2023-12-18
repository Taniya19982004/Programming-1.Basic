#include<stdio.h>
void main()
{
    int a[100];
    int n,i,Xor;
    printf("enter a number");
    scanf("%d",&n);
    printf("Enter an array element");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
       Xor=Xor^a[i];
    }
    printf("xor of array is :%d",Xor);
}
