//Write a function to find number of possible combination can be made out of n items,r selected at a time
#include<stdio.h>
int fact(int n)
{
    int f=1;
    for(int i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}

int combin(int n,int r)
{
    return n/(n-r)* r;
}
void main()
{
    int x;
    x=fact(5);




}

