#include<stdio.h>
int main()
{
    long long X, a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    X = (a * b) - (c * d);
    printf("Difference = %lld\n", X);
    return 0;
}
