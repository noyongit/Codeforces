#include<stdio.h>
int main()
{
    int N, i, f=0,n;
    scanf("%d", &N);
    for(i = 1; i<=N; i++)
    {
        scanf("%d", &n);
        if(n>f)
        {
            f=n;
        }
    }
    printf("%d\n", f);
    return 0;
}
