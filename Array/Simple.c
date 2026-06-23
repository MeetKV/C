#include <stdio.h>

int main()
{
    int n, a[10], sum=0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements of array: ");

    for(int i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
        sum=sum + a[i];
    }

    printf("Sum of array elements: %d\n", sum);

    return 0;
}