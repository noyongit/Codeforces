#include<stdio.h>
int main()
{
    int X, Y,i,f,j,N,t;
    scanf("%d", &N);
    for(j=1; j<=N; j++)
    {
        scanf("%d %d", &X, &Y);
        f=0;
        if(X>Y)
        {
            t=X;
            X=Y;
            Y=t;
        }
        for(i=X+1; i<Y; i++)
        {
            if(i%2!=0)
            {
                f+=i;
            }
        }
        printf("%d\n", f);
    }
    return 0;
}
