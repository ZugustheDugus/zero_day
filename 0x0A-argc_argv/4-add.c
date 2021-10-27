#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function to add together args
 * @argc: count of arguments
 * @argv: array of arguments to add
 * Return: Returns either false or true
 */

int main(int argc, char *argv[])
{
int i, num, res;

for (num = 1; num < argc; num++)
{
for (i = 0; argv[num][i]; i++)
{
if (argv[num][i] < '0' || argv[num][i] > '9')
{
printf("Error\n");
return (1);
}
}
res += atoi(argv[num]);
}
printf("%d\n", res);
return (0);
}
