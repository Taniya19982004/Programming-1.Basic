//plus of odd numbers
#include<stdio.h>
int main()
{
    int a[120];
    int n,i,plus=0;
    printf("enter a number");
    scanf("%d",&n);
    printf("enter an array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==1)
        {
            plus=plus+a[i];
        }
    }
    printf("plus of odd number is:%d",plus);

    return 0;


}
