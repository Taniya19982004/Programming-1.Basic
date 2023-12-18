//Sum of even numbers
#include<stdio.h>
void main()
{
    int a[100];
    int i,n,sum=0;
    printf("Enter a number");
    scanf("%d",&n);
    printf("enter an array element");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
        if(a[i]%2==0)
    {
       sum=sum+a[i];
    }
    printf("sum of even number is :%d",sum);

}
