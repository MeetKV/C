//     1
//    12
//   123
//  1234
// 12345

// #include<stdio.h>
// int main()
// {
//     for(int i=1;i<=5;i++)
//     {
//         for(int j=5;j>=i;j--)
//         {
//             printf(" ");
//         }
//         for(int j=1;j<=i;j++)
//         {
//             printf("%d",j);
//         }
//         printf("\n");
//     }
//     return 0;

// }

//    1
//   121
//  12321
// 1234321

// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("enter number:- ");
//     scanf("%d",&n);

//     for(int i=1;i<=n;i++)
//     {
//         for(int j=5;j>=i;j--)
//         {
//             printf(" ");
//         }

//         for(int j=1;j<=i;j++)
//         {
//             printf("%d",j);
//         }

//         for(int j=i-1;j>=1;j--)
//         {
//             printf("%d",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

//    1
//   121
//  12321
// 1234321
//  12321
//   121
//    1

// #include <stdio.h>
// int main()
// {
//     // int n;
//     // printf("enter number:-");
//     // scanf("%d",&n);

//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 5; j >= i; j--)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d", j);
//         }
//         for (int j = i - 1; j >= 1; j--)
//         {
//             printf("%d", j);
//         }
//         printf("\n");
//     }

//     for (int i = 4; i >= 1; i--)
//     {
//         for (int j = 5; j >= i; j--)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%c", 'A' + j - 1);
//         }
//         for (int j = i - 1; j >= 1; j--)
//         {
//             printf("%c", 'A' + j - 1);
//         }
//         printf("\n");
//     }
// }

// A
// AB
// ABC
// ABCD
// ABCDE

// #include<stdio.h>
// int main()
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%c", 'A' + j - 1);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// ABCDE
// ABCD
// ABC
// AB
// A

// #include<stdio.h>
// int main()
// {
//     for (int i = 5; i >= 1; i--)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%c", 'A' + j - 1);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 1
// 01
// 101
// 0101
// 10101

// #include<stdio.h>
// int main()
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             if ((i + j) % 2 == 0)
//             {
//                 printf("1");
//             }
//             else
//             {
//                 printf("0");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// *        *
// **      **
// ***    ***
// ****  ****
// **********
// ****  ****
// ***    ***
// **      **
// *        *

// #include<stdio.h>
// int main()
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("*");
//         }
//         for (int j = 1; j <= 10 - 2 * i; j++)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }

//     for (int i = 4; i >= 1; i--)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("*");
//         }
//         for (int j = 1; j <= 10 - 2 * i; j++)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// ***************
// ************
// *********
// ******
// ***
// ***
// ******
// *********
// ************
// ***************

// #include<stdio.h>
// int main()
// {
//     for (int i = 5; i >= 1; i--)
//     {
//         for (int j = 1; j <= 3 * i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }

//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= 3 * i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// *****
//  ****
//   ***
//    **
//     *
//    **
//   ***
//  ****
// *****

#include<stdio.h>
int main()
{
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= 5 - i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 2; i <= 5; i++)
    {
        for (int j = 1; j <= 5 - i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

//     *
//    ***
//   *****
//  *******
// *********
//  *******
//   *****
//    ***
//     *

#include<stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5 - i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 4; i >= 1; i--)
    {
        for (int j = 1; j <= 5 - i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

//         1
//       1   1
//     1   2   1
//   1   3   3   1
// 1   4   6   4   1

#include<stdio.h>
int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        int number = 1;
        for (int j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", number);
            number = number * (i - j) / (j + 1);
        }
        printf("\n");
    }
    return 0;
}