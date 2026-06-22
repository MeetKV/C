#include <stdio.h>
#include <string.h>
int main()
{
    char st[100];
    int count = 0;

    printf("Enter string:");
    scanf("%s", &st);

    for (int i = 0; st[i] != '\0'; i++)
    {
        count++;
    }
    printf("String length: %d", count);
    return 0;
}