#include <stdio.h>
/**
 * main - main function
 *
 * fizz_buzz - prints numbers,Fizz, Buzz and FizzBuzz
 *
 * Return: Always 0
 */
int main(void)

{
	int x = 1;

	while (x <= 100)
	{
	if (x % 3 == 0 && x % 5 == 0)
	printf("FizzBuzz");
	else if (x % 5 == 0)
	{
	if (x == 100)
	{
	printf("Buzz");
	printf('\n');
	}
	else
	printf("Buzz");
	}
	else if (x % 3 == 0)
	printf("Fizz");
	else
	printf("%d ", x);
	x++;
	}
	return (0);
}

