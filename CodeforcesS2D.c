#include<stdio.h>
int main()
{
    int x;
    while(1)
    {
        scanf("%d", &x);
        if(2000-x==1)
        {
            printf("Correct\n");
            break;
        }
        else
        {
             printf("Wrong\n");
        }
    }
    return 0;
}
