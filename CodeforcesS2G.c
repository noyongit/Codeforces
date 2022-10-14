#include<stdio.h>
int main()
{
    int N, i, j,n;
    long long f;
    scanf("%d", &N);
    for(i=1; i<=N; i++)
    {
        scanf("%d", &n);
        f=1;
        for(j=1; j<=n; j++)
        {
           f=f*j;
        }
        printf("%lld\n",f);

    }
    return 0;
}
