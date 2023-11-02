#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory to an array
 * @nmemb:number of bloc of memory
 * @size:size of data type (int)
 * Return:returns a void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	size_t i;

	if (nmemb == 0 || size == 0)
	return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	return (NULL);
	for (i = 0; i < (nmemb * size); i++)
	ptr[i] = 0;
	return (ptr);
}
