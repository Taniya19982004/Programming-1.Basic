#include<stdio.h>
void main()
{
    int i,n,j;
    printf("Enter a number ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-1+i;j++)
        {
            if(j<=n-i)
            {
                printf("  ");
            }
            else
            {
                printf("* ");
            }
        }
        printf(" \n");
    }
}
















