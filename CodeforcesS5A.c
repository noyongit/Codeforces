#include<stdio.h>
int Sum(int x, int y)
{
   return x+y;
}
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d\n", Sum(x,y));
    return 0;
}
