#include<stdio.h>
int main()
{
    double x, y;
    scanf("%lf %lf", &x, &y);
    if(x==0 && y==0)
    {
        printf("Origem\n");
    }
    else if(x>0 && y>0)
    {
        printf("Q1\n");
    }
    else if(x<0 && y>0)
    {
        printf("Q2");
    }
    else if(x<0 && y<0)
    {
        printf("Q3");
    }
    else if(x>0 && y<0)
    {
        printf("Q4");
    }
    else if(x==0 || y==0)
    {
        if(x==0 && y!=0)
        {
            printf("Eixo X\n");
        }
        else if(x!=0 && y==0)
        {
            printf("Eixo Y\n");
        }
    }
    return 0;
}
