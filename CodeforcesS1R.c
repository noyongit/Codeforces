#include<stdio.h>
int main()
{
    int N, y, m;
    scanf("%d", &N);
    y = N/365;
    N%=365;
    m = N/30;
    N%=30;
    printf("%d years\n%d months\n%d days\n", y, m, N);
    return 0;
}
