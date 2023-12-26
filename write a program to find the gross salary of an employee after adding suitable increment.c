//the gross salary of an employee after adding suitable increment
/*increment is based on sales
 sales>=10 and <20 then increment is 10%
 sales<=30 and >20 then increment is 20%
 if sales is less then 10 then no increment
 if sales is >30 then increment is 30%*/
#include<stdio.h>
int main()
{
    int sales ,incr;
    float s,gs;//salary and gross salary//
    printf("enter the current salary and increment \n");
    scanf("%f and %d",&s,&incr);
    if(sales<=10)//0-10
            incr=0;
    else if(sales>=10&&sales<20)//10-19
        incr=10;
    else if(sales<=30&&sales>20)//21-30
        incr=20;
    else //31 to any number
        incr=30;
    //gross salary
    gs=s+(s*incr/100);
    printf("gs is %f for salary %f and incr %d",gs,s,incr);
   return 0;

}
