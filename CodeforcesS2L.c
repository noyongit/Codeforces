#include<stdio.h>
int main()
{
    int a,b,i,M,f=1;
    scanf("%d %d", &a, &b);
    for(i=1; i<=a; i++)
    {
        if(a%i==0 && b%i==0)
        {

                f=i;
        }
    }
    printf("%d\n", f);
    return 0;
}
