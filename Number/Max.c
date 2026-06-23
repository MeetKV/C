#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter a:");
    scanf("%d", &a);
    printf("Enter b:");
    scanf("%d", &b);
    printf("Enter c:");
    scanf("%d", &c);

    if (a > b)
    {
        if (b > c)
        {
            printf("A is Max");
        }
        else
        {
            printf("C is Max");
        }
    }
    else
    {
        if (b > c)
        {
            printf("B is Max");
        }
        else
        {
            printf("C is Max");
        }
    }

    return 0;
}