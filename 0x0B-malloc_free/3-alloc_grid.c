#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocates memory for a grid of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Return either the grid or NULL
 */

int **alloc_grid(int width, int height)
{
int i;
int **k;

k = (int **)malloc(height * sizeof(int *));

if (height <= 0 || width <= 0)
{
free(k);
return (NULL);
}
for (i = 0; i < height; i++)
{
k[i] = (int *)malloc(width * sizeof(int));
if (k[i] == NULL)
{
for (i = 0; i < height; i++)
{
free(k[i]);
}
free(k);
return (NULL);
}
}
return (k);
}
