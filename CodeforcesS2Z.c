#include<stdio.h>
int main()
{
    int x, y, z, k, s,f=0;
    scanf("%d %d", &k, &s);
    for(x=0; x<=k; x++)
    {
        for(y=0; y<=k; y++)
        {
            z=s-(x+y);
            if(z>=0 && z<=k)
            {
                f++;
            }
        }
    }

printf("%d\n", f);
return 0;
}
