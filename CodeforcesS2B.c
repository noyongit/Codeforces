#include<stdio.h>
int main()
{
    int N, i, f=0;
    scanf("%d", &N);
    for(i=1; i<=N; i++)
    {
        if(i%2==0)
        {
            printf("%d\n", i);
            f++;
        }
    }
    if(f==0)
    {
        printf("%d\n", -1);
    }
    return 0;
}
