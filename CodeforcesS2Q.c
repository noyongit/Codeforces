#include<stdio.h>
int main()
{
    int N,i,a,r;
    scanf("%d", &N);
    for(i=1;i<=N;i++)
    {
       scanf("%d", &a);
       r=1;
       if(a==0)
       {

       }
       while(a>0)
       {
           r=a%10;
           a=a/10;
           printf("%d ", r);
       }
       printf("\n");
    }
    return 0;
}
