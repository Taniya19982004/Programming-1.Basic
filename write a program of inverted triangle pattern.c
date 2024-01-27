#include<stdio.h>
void main()
{
    int i,j,n;

    printf("enter the number of rows you want to print?");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=2*n-i;j++)
        {
            if(j<=i-1)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }

        }
        printf("\n");
    }

}
