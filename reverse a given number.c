#include<stdio.h>
void main()
{
    int x,r,y=0;
    printf("enter the value of x\n");
    scanf("%d",&x);
    while(x!=0)
    {
        r=x%10;
        y=y*10+r;
        x=x/10;

    }
    printf("reverse of the number:%d",y);

}
