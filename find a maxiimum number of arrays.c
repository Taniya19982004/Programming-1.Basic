#include<stdio.h>
void main()
{
    int a[100];
    int ans,n,i,maximum=0;
    printf("enter a number");
    scanf("%d",&n);
    printf("enter an array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>maximum)
        {
            maximum=a[i];

        }
    }
     printf("maximum value of array element is :%d",maximum);
}
