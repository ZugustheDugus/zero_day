#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function to multiply two arguments
 * @argc: Count of arguments
 * @argv: indexer of specific arguments
 * Return: Returns success
 */

int main(int argc, char *argv[])
{
int a, b, result;

if (argc != 3)
{
printf("Error\n");
return (1);
}

a = atoi(argv[1]);
b = atoi(argv[2]);

result = a * b;
printf("%d\n", result);
return (0);
}
