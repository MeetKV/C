#include <stdio.h>
int main()
{
    char str1[100], str2[100];
    int flag = 1;

    printf("Enter string 1:");
    scanf("%s", &str1);
    printf("Enter string 2:");
    scanf("%s", &str2);

    for (int i = 0; str1[i] != '\0' || str2[i] != '\0'; i++)
    {
        if (str1[i] != str2[i])
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
    {
        printf("Same string ");
    }
    else
    {
        printf("Different string ");
    }
    return 0;
}