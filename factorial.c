#include<stdio.h>
void main()
{
    int n,i,fact=1;
    printf("enter a number");
    scanf("%d",&n);

     for(i=1;i<=n;i++)
     {
         fact=fact*i;
          printf("Intermediate factorial:%d\n",fact);
      }


    printf(" Final factorial:%d\n",fact);
}
