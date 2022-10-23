#include<stdio.h>
int main()
{
    int X;
    char x;
    scanf("%c ", &x);
    X=x;
    if(X>=48 && X<=57)
    {
        printf("IS DIGIT\n");
    }
    else
    {
        if(X>=97 && X<=122)
        {
            printf("ALPHA\nIS SMALL\n");
        }
        else if(X>=65 && X<=90)
        {
            printf("ALPHA\nIS CAPITAL\n");
        }
    }
    return 0;
}
