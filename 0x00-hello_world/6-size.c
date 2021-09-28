#include <stdio.h>
/**
 * main - this is what the main function does
 *
 * Return: this is what's supposed to be returned to main
 */
int main(void)
{
int intType;
long longintType;
long long int longlongType;
float floatType;
char charType;

printf("Size of a char: %zu byte(s)\n", sizeof(charType));
printf("Size of an int: %zu byte(s)\n", sizeof(intType));
printf("Size of a long int: %zu byte(s)\n", sizeof(longintType));
printf("Size of a long long int: %zu byte(s)\n", sizeof(longlongType));
printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
return (0);
}
