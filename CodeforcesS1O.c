#include<stdio.h>
int main()
{
    int a, b, C;
    char s;
    scanf("%d%c%d", &a,&s,&b);
    if(s == '+')
    {
        C=a+b;
       printf("%d\n", C);
    }
    else if(s== '-')
    {
        C=a-b;
       printf("%d\n", C);
    }
    else if(s== '*')
    {
        C=a*b;
       printf("%d\n", C);
    }
    else if(s== '/')
    {
        C=a/b;
       printf("%d\n", C);
    }
    return;
}
