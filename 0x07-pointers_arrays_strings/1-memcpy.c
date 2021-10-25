#include "main.h"

/**
 * _memcpy - Function to copy and print memory in Hexa
 * @src: The memory being copied
 * @dest: The output copied memory
 * @n: Indexer for bytes of memory
 * Return: Nothing.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0 ; i < n ; i++)
{
dest[i] = src[i];
}
return (dest);
}
