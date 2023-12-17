#include<stdio.h>
int main()
{
    //swap two numbers with the help of another variable
    int a,b,c;
    printf("ENTER TWO NUMBERS");
    scanf("%d %d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf(" Value of a:%d\n value of b:%d",a,b);
    printf("\n");

    //swap two numbers without the help of another variable
    int x,y;
    printf("enter two numbers");
    scanf("%d%d",&x,&y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf(" Value of x:%d\nvalue of y:%d",x,y);




}
