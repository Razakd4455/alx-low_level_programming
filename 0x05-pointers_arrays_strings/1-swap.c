#include "main.h"
/**
 * swap_int - swaps the vaulues of two integers
 *
 * @a: first integer to be swap
 *
 * @b: second integer to be swap
 *
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{

int temp = *a;
*a = *b;
*b = temp;

}
