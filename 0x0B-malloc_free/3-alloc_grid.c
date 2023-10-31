#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - allocates memory for a 2D array of integers
 * @width: number of columns
 * @height: number of rows
 * Return: pointer to the allocated 2D array or NULL on failure
 */
int **alloc_grid(int width, int height)
{
int **array;
int i, j;
if (width <= 0 || height <= 0)
return (NULL);
array = (int **)malloc(height * sizeof(int *));
if (array == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
array[i] = (int *)malloc(width * sizeof(int));
if (array[i] == NULL)
{
for (j = 0; j < i; j++)
{
free(array[j]);
}
free(array);
return (NULL);
}
}
return (array);
}

