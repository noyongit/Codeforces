#include<stdio.h>
int main()
{
    int N, b,i,j;
    char a;
    scanf("%c\n", &a);
    scanf("%d\n", &N);
    for(i=1; i<=N; i++)
    {
        scanf("%d ", &b);
        for(j=1; j<=b; j++)
        {
            printf("%c",a);
        }
        printf("\n");
    }
    return 0;
}
