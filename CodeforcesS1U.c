#include<stdio.h>
int main()
{
    double N, f;
    int M;
    scanf("%lf", &N);
    M=(int)N;
    if(N==M)
    {
        printf("int %d\n", M);
    }
    else
        {
            f=N-M;
            printf("float %d %.3lf\n", M, f);
        }
    return 0;
}
