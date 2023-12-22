//Greater between four number
#include<stdio.h>
void main()
{
    int l,m,n,o;
    printf("enter four number");
    scanf("%d%d%d%d",&l,&m,&n,&o);
    if(l>m)
    {
        if(l>n)
        {
        if(l>o)
            printf("%d is greater",l);
        else
            printf("%d is greater",o);
        }
    }
    if(m>n)

        {
        if(m>o)
            printf("%d is greater",m);
        else
            printf("%d is greater",o);
        }

    else
    {
        if(n>o)
            printf("%d is greater",n);
        else
            printf("%d is greater",o);
    }

}
