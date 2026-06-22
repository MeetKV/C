#include <stdio.h>
int main()
{

    char str[100];
    int count = 0;
    char ch;

    printf("Enter string:");
    scanf("%s", str);

    printf("Enter character:");
    scanf(" %c", &ch);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            count++;
        }
    }
    printf("Count: %d", count);
    return 0;
}
