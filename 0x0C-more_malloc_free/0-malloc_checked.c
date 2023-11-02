#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - creates allocated memory
 * @b:integer
 * Return:returns a pointer
 */
void *malloc_checked(unsigned int b)
{
void *ptr;

ptr = malloc(b);
if (ptr == NULL)
{
exit(98);
}
return (ptr);
}

