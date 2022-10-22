#include<stdio.h>
int main()
{
    int n, f=1, i, j;
    scanf("%d",  &n);
    for(i = 1; i<=n; i++)
    {
        //for(j = 1; j <=3; j++)
        {
            printf("%d ", f);
            f++;
            printf("%d ", f);
            f++;
            printf("%d PUM\n", f);
            f+=2;
        }
    }
    return 0;
}
