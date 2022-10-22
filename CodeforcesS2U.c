#include<stdio.h>
int main()
{
    int n, a, b,f=0, i,r,s,t,x;
    scanf("%d %d %d", &n,&a,&b);
    for(i=1; i<=n; i++)
    {
        x=i;
        s=0;
        while(x>0)
        {
        r=x%10;
        s+=r;
        x/=10;
        }
        if(a<=s && s<=b)
        {
            f+=i;
        }
    }
    printf("%d\n", f);
    return 0;
}
