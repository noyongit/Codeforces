#include<stdio.h>
char prime(int n)
{
    int i,G=0;
    char A;
    if(n==1)
    {
        G++;
    }
    for(i=2; i<n; i++)
    {
        if(n%i==0)
        {
            G++;
            break;
        }
        if(G>0)
        {
            A=No;
        return A;
        }
        else
        {
            printf("YES\n");
        }
    }
}
    int main()
    {
        int N, n, j;
        scanf("%d", &N);
        for(j=1; j<=N; j++)
        {
            scanf("%d", &n);
            printf("%c\n", prime(n));
        }
        return 0;
    }

