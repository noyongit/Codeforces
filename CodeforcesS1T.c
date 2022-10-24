#include<stdio.h>
int main()
{
    int a, b, c, x, y, z;
    scanf("%d %d %d", &a, &b, &c);
    x=a;
    y=b;
    z=c;
    if(a<=b && a<=c)
    {
        if(b<c)
        {
            printf("%d\n%d\n%d\n\n", a, b, c);
        }
        else
        {
             printf("%d\n%d\n%d\n\n", a, c, b);
        }
    }
    else if(b<=a && b<=c)
    {
        if(a<c)
        {
            printf("%d\n%d\n%d\n\n", b, a, c);
        }
        else
        {
             printf("%d\n%d\n%d\n\n", b, c, a);
        }
    }
    else if(c<=b && c<=a)
    {
        if(b<a)
        {
            printf("%d\n%d\n%d\n\n", c, b, a);
        }
        else
        {
             printf("%d\n%d\n%d\n\n", c, a, b);
        }
    }
    printf("%d\n%d\n%d\n", x, y, z);
    return 0;
}
