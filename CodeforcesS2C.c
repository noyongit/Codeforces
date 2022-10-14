#include<stdio.h>
int main()
{
    int N, i, M,e=0,o=0,p=0,n=0;
    scanf("%d", &N);
    for(i=1; i<=N; i++)
    {
        scanf("%d", &M);
        if(M%2==0)
        {
            e++;
        }
        else
        {
            o++;
        }
        if(M>0)
        {
            p++;
        }
        else if(M<0)
        {
            n++;
        }
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n", e, o, p, n);
    return 0;
}
