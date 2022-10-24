#include<stdio.h>
int main()
{
    int X,r;
    scanf("%d", &X);
    while(X>0)
    {
        r=X%10;
        X/=10;
    }
    if(r%2==0)
    {
        printf("EVEN\n");
    }
    else
        {
            printf("ODD\n");
        }
    return 0;
}
