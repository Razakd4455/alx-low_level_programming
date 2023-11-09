#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - sum of two numbers
 * @a:first member
 * @b:second member
 * Return:sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - difference of two numbers
 * @a:first member
 * @b:second member
 * Return:difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiples two numbers
 * @a:first member
 * @b:second member
 * Return:product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide two numbers
 * @a:first member
 * @b:second member
 * Return:resut of division of a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - the remainder of the division of two numbers
 * @a:first memebr
 * @b:second member
 *Return:the resut of the diversion of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
