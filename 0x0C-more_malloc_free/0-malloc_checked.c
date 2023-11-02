#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - causes normal termination with exit 98
 * @b: an integer
 * Return:returns a pointer or 98
 */
void *malloc_checked(unsigned int b)
{

void *ptr = malloc(b);
if (ptr == NULL)
{
exit(98);
}
return (ptr);
}
