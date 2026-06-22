#include <stdio.h>
#include <string.h>
int main()
{
    char st[100], temp[100];
    int j = 0;

    printf("Enter string:");
    scanf("%s", &st);

    int len = strlen(st);

    for (int i = len - 1; i >= 0; i--)
    {
        temp[j] = st[i];
        j++;
    }
    temp[j] = '\0';
    printf("Temp=%s\n", temp);

    if (strcmp(temp, st) == 0)
    {
        printf("Palindrome string");
    }
    else
    {
        printf("Not a palindrome string");
    }
}