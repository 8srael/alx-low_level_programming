#include <stdio.h>

/**
 * main - prints the name of the program
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
	if (argc)
		printf("%s\n", *argv);

	return (0);
}
