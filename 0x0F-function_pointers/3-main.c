#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - main function
 *
 * @argc : number of arguments supplied to the prog
 * argc is an integer
 * @argv : array of pointers to the strings which are those args
 * argv is an array of pointers of char (string array)
 *
 * Return: 0.
*/

int main(int argc, char **argv)
{
	int x, y;

	int (*operator)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	operator = get_op_func(*(argv + 2));

	if (operator == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	x = atoi(*(argv + 1));
	y = atoi(*(argv + 3));

	printf("%d\n", operator(x, y));


	return (0);
}
