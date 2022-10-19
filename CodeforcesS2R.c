#include<stdio.h>
int main()
{
    int N,M,i,T,f;
    while(1)
    {
        scanf("%d %d", &N, &M);
        f=0;
        if(N>0 && M>0)
        {
            if(N>M)
            {
                T=N;
                N=M;
                M=T;
            }
            for(i=N; i<=M; i++)
            {
                printf("%d ", i);
                f+=i;
            }
            printf("sum =%d\n", f);
        }
        else
        {
            break;
        }
    }
    return 0;
}
