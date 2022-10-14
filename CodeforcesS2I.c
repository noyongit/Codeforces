#include<stdio.h>
int main()
{
    int N,y=0,s,temp;
    scanf("%d", &N);
    temp=N;
    while(N>0)
    {
        s=N%10;
        y=y*10+s;
        N=N/10;

    }
    printf("%d\n", y);
    if(temp==y)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
