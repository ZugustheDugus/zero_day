#include "main.h"

/**
 * string_toupper - check the code for Holberton School students.
 * @ : space for generic char
 * Return: Always 0.
 */

char *string_toupper(char *s)
{
int i = 0;
int j;

 while (s[i] != '\0')
   {
     i++;
   }
 i--;
 for (j = 0; j < i; j++)
 {
   if (s[j] >= 65 && s[j] <= 90)
     {
   s[j] = s[j] + 32;
     }
   else if (s[j] >= 97 && s[j] <= 122)
     {
       s[j] = s[j] - 32;
     }
 }   
return (0);
}
