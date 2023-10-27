#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc:the number of command line arguments
 * @argv:array that contain command line arg..
 * Return: (0) when sucessful
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
	printf("ERROR\n");
	return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
