#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 *
 * @argc : number of arguments supplied to the prog
 * argc is an integer
 * @argv : array of pointers to the strings which are those args
 * argv is an array of pointers of char (string array)
 *
 * Return: 0 if prog receives two args, 1 otherwise.
*/

int main(int argc, char *argv[])
{
	int n1, n2;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	n1 = atoi(*(argv + argc - 1));
	n2 = atoi(*(argv + argc - 2));

	printf("%d\n", n1 * n2);
	return (0);
}
