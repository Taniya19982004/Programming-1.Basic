#include<stdio.h>
void main()
{
    int i,j,n;
    printf("Enter the number of rows you want to enter");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==1||j==n/2)
            {
                printf(" *");
            }
            else
            {
                printf("  ");
            }

        }
         printf("\n");
    }
}
