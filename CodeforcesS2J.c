#include<stdio.h>
int main()
{
    int N,i,f=0,j;
    scanf("%d", &N);
    f=0;
    for(i=2; i<N; i++)
    {
        for(j=2; j<i ; j++)
        {
            if(i%j==0)
            {
                f=1;
                break;
            }

        if(f!=1)
        {
            printf("%d ", i);
        }
    }
    }
    return 0;
}
