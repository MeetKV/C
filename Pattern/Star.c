// *
// **
// ***
// ****
// *****

#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

// *****
// ****
// ***
// **
// *

#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=i;j<=5;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

//         *   
//       *   *   
//     *   *   *   
//   *   *   *   *   
// *   *   *   *   *   

#include <stdio.h>

int main()
{
    int i, j, k, n = 5;

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n - i; j++)
            printf("  ");

        for(k = 1; k <= i; k++)
            printf("*   ");

        printf("\n");
    }

    return 0;
}
