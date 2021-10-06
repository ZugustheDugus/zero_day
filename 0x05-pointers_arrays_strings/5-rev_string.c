#include "main.h"

/**
 * rev_string - check the code
 *
 * @s: character referring to str in main function
 */
void rev_string(char *s)
{
char t;
int i = 0, j = 0;

while (*(s + i))
{
i++;
}
i--;
while (i > j)
{
t = *(s + i);
*(s + i) = *(s + j);
*(s + j) = t;
j++;
i--;
}
}
