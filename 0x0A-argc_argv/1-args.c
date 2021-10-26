#include <stdlib.h>
#include <stdio.h>

/**
 * main - The main function
 * @argc: the number of arguments made
 * @argv: the array of arguments made (numbered 0+)
 * Return: returns success
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
if (argc > 0)
{
printf("%d\n", argc - 1);
}
return (0);
}
