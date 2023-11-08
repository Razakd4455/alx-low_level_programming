#include "function_pointers.h"
/**
 * int_index - iterator through array
 * @size:array size
 * @cmp:function pointer to compare intergers
 * @array:targeted array
 * Return:returns 1 if element and -1 if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	return (-1);
	for (i = 0; i < size; i++)
	{
	if (cmp(array[i]) != 0)
		return (i);
	}
	return (-1);
}
