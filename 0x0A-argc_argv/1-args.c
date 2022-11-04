#include <stdio.h>

/**
 * main - check the code
 *
 * @argc : number of arguments supplied to the prog
 * argc is an integer
 * @argv : array of pointers to the strings which are those args
 * argv is an array of pointers of char (string array)
 *
 * Return: Always 0.
*/

int main(int argc, char *argv[])
{
	if (argv)
		printf("%d\n", argc - 1);

	return (0);
}
