#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - function returns a pointer to 2D array
 * @**ptr:pointer to pointer of 2D array
 * @width:colums in array
 * @height:rows in array
 * Return:returns a pointer or NULL
 */
int **alloc_grid(int width, int height)
{

int **array;
int i = 0;
width = 3;
height = 2;
if (width <= 0 || height <= 0)
return (NULL);
array = (int **)malloc(height * sizeof(int *));
if (array == NULL)
{
return (NULL);
}
for (i = 0; i < width; i++)
{
array[i] = (int *)malloc(width * sizeof(int));
if (array[i] == NULL)
return (NULL);
}
return (array);
}
