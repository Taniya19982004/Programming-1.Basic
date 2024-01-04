#include<stdio.h>
int main()
{

    char s[20];
    printf("enter a string");
    scanf("%s",s);
    fflush(stdin);
    int l=strlen(s);
    for(int i=l-1;i>=0;i--)
    {
        printf("%c",s[i]);
    }
}
