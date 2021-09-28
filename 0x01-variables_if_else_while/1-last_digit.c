#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - this is what the main function does
 *
 * Return: this is what's supposed to be returned to main
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 5)
{
printf("Last digit of %d and is greater than 5\n", n);
}
else if (n < 6 && n != 0)
{
printf("Last digit of %d is negative\n", n);
}
else
{
printf("Last digit of %d and is 0\n", n);
}
return (0);
}
