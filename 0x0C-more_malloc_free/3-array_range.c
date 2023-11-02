#include "main.h"
#include <stdlib.h>
/**
 * array_range - create an array of integers
 * @min:minimum value
 * @max:maximum value
 * Return:returns a pointer to the allocated memory
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, l;

	if (min > max)
	return (NULL);
	l = max - min + 1;
	ptr = malloc(sizeof(int) * l);
	if (ptr == NULL)
	return (NULL);
	for (i = 0; i < l; i++)
	{
	ptr[i] = min;
	min++;
	}
	return (ptr);
}
