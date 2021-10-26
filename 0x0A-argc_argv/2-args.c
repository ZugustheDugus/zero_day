#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - The main function
 * @argc: the number of arguments made
 * @argv: the array of arguments made (numbered 0+)
 * Return: returns success
 */

int main(int argc, char* argv[])
{
int i;

if (argc > 0)
{
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
}
return (0);
}
