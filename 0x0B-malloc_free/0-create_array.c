#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * create_array - create an array of characters and initializes
 * it with a specific character
 * @size: size of the array
 * @c:array
 * Return: pointer or NULL
 */
char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;
if (size == 0)
return (NULL);
array = (char *)malloc(sizeof(char) * size);
if (array == NULL)
return (NULL);
for (i = 0; i < size; i++)
array[i] = c;
return (array);
}

