#include <stdio.h>
#include <string.h>
int main()
{
    char s[10];

    printf("Enter string: ");
    // scanf("%s",s);

    // print the string with space  for that below line is used
    fgets(s, sizeof(s), stdin);

    printf("%s", s);
    return 0;
}