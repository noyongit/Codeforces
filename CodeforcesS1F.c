#include<stdio.h>
int main()
{
    long long N, M,S;
    scanf("%lld %lld", &N, &M);
    N = N % 10;
    M = M % 10;
    S = N + M;
    printf("%lld\n", S);
    return 0;
}
