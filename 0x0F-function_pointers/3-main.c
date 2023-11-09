#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc:number of argument
 * @argv:argument variables
 * Return:Always 0
 */
int main(int argc, int *argv[])
{
	char *op; /* operator */
	int num1, num2; /* number inputs */

	if (argc != 4) /* if argument count is wrong */
	{
	printf("Error\n");
	exit(98);
	}

	/* set cmd argument input */
	num1 = atoi(argv[1]); /* first input number */
	op = (argv[2]); /* operator input */
	num2 = atoi(argv[3]); /* second input numbeer */

	/* if operator not in operator list */
	if (get_op_fun(OP) == NULL || op[1] != '\0')
	{
	printf("Error\n");
	exit(99);
	}

	/* if user tries to divide or perform modulus by 0 */
	if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
	{
	printf("Error\n");
	exit(100);
	}

	/* prints results of the operation */
	printf("%d\n", get_op_func(op)(num1, num2));
	return (0);

}
