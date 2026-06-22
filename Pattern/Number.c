// 1 
// 1 1
// 1 1 1 
// 1 1 1 1 
// 1 1 1 1 1 

// #include <stdio.h>

// int main()
// {
//     int n = 5;

//     for(int i = 0; i < n; i++)
//     {
//         for(int j = 0; j <= i; j++)
//         {
//             printf("1 ");
//         }
//         printf("\n");
//     }

//     return 0;
// }

// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5 
// #include <stdio.h>

// int main() {
//     int n = 5;

//     // First loop for printing rows
//     for (int i = 0; i < n; i++) {

//         // Second loop for printing number in each rows
//         for (int j = 0; j <= i; j++)
//             printf("%d ", j + 1);
//         printf("\n");
//     }
//     return 0;
// }

// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1

// #include <stdio.h>

// int main() {
//     int n = 5;

//     for (int i = n; i >= 1; i--) {
//         for (int j = 1; j <= i; j++) {
//             printf("%d ", j);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

// #include <stdio.h>
// int main() {
//     int n = 5;

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= i; j++) {
//             printf("%d ", j);
//         }
//         printf("\n");
//     }

//     return 0;
// }

//         1 
//       1 2 
//     1 2 3 
//   1 2 3 4 
// 1 2 3 4 5 

// #include <stdio.h>

// int main() {
//     int n = 5;

//     // Outer loop is for printing the rows
//     for (int i = 0; i < n; i++) {

//         // First inner loop for printing leading whitespaces
//         for (int j = 0; j < 2 * (n - i) - 2; j++)
//             printf(" ");

//         // Second inner loop for printing  numbers
//         for (int k = 0; k <= i; k++)
//             printf("%d ", k + 1);
//         printf("\n");
//     }
//     return 0;
// }


// 1
// 23
// 456
// 78910

#include<stdio.h>
int main()
{
    int num=1;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("  %d",num);
            num++;            
        }
        printf("\n");
    }
    return 0;
}