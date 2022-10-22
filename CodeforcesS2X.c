#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,y,a,r,f;
    scanf("%d", &n);
    for(i = 1; i <=n; i++)
    {
        scanf("%d", &a);
        y=0;
        f=0;
        while(a>0)
        {
            r=a%2;
            a/=2;
            if(r==1)
            {
                y++;
            }
        }
            f= pow(2,y)-1;
            printf("%d\n", f);
    }
    return 0;
}
