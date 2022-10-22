#include<stdio.h>
int main()
{
    int N,fir=0,sec=1,fibo=0,i;
    scanf("%d ", &N);
    printf("%d ", fir);
    for(i=2; i<=N; i++)
    {

        fir=sec;
        sec=fibo;
        fibo=fir+sec;
        printf("%d ", fibo);

    }
    printf("\n");
    return 0;
}
