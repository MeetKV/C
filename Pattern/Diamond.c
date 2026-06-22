//    1
//   121
//  12321
// 1234321
//  12321
//   121
//    1

#include<stdio.h>
int main()
{
    // int n;
    // printf("enter number:-");
    // scanf("%d",&n);

    for(int i=1;i<=5;i++)
    {
        for(int j=5;j>=i;j--)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        for(int j=i-1;j>=1;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }

    for(int i=4;i>=1;i--)
    {
        for(int j=5;j>=i;j--)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        for(int j=i-1;j>=1;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}