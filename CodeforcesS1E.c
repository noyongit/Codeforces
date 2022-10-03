#include<stdio.h>
int main()
{
    float R;
    double r = 3.141592653, A;
    scanf("%f", &R);
    A = r * R * R;
    printf("%.9lf\n", A);
    return 0;
}
