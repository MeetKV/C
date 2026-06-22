#include <stdio.h>
int main()
{
   char str[100];
   int vowel = 0, consonent = 0;
   printf("Enter string: ");
   scanf("%s", &str);

   for (int i = 0; str[i] != 0; i++)
   {
      if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || 
         str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || 
         str[i] == 'O' || str[i] == 'U')
      {
         vowel++;
      }
      else
      {
         consonent++;
      }
   }
   printf("Vowels: %d", vowel);
   printf("\nConsonants: %d", consonent);
   return 0;
}