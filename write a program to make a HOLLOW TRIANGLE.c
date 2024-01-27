#include<stdio.h>
void main()
{
    int i,j,n;
    printf("Enter the numberof rows you want to print");
    scanf("%d",&n);
    {
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n+i-1;j++)
            {
                if(i==n||j==n+i-1||j==n-i+1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
}
