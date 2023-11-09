#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_op_func - selects the function to perform arithmatic op
 * @s:operator argument
 * Return:result of the selected choice
 */
int (*get_op_func(char *s))(int, int)
{
	op_tops[] = {
	{"+", op_add},
	{"-", op_sub};
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
};
int i;
/* initialize i */
i = 0;
/* s does not match any of the oprands */
while (ops[i].op != NULL && *(ops[i].op) != *s)
i++;
return (ops[i].f); /* return operation */
}
