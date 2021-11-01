#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

char *_strstr(char *haystack, char *needle)
{
  unsigned i, j;
  i = 0;

  while (haystack[i])
    {
      for (j = 0; needle[j]; j++)
	{
	  if (haystack[i] == needle[j])
	    {
	      return (haystack + i);
	    }
	}
      i++;
    }
  return ('\0');
}
