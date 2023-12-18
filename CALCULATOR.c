#include<stdio.h>
void main()
{
    float a,b,c;
    char ch;
    printf("Enter two numbers ");
    scanf("%f%f",&a,&b);
    printf("enter the user choice");

     fflush(stdin);
    scanf("%c",&ch);
    switch(ch)
    {
        case'+':c=a+b;
        printf("sum is %f",c);
        break;
        case'-':c=a-b;
        printf("subtraction is %f",c);
        case'*':c=a*b;
        break;
        printf("multiply of two number%f",c);
        break;
        case'/':c=a/b;
        printf("divide of two number:%f",c);
        break;
        //case'%':c=a%b;
        //printf("modulus is :%f",c);
       // break;
        default:("invalid operation");
    }


}
