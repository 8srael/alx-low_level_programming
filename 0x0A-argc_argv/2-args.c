#include <stdio.h>

/**
 * main - prints all arguments that the program receives
 *
 * @argc : number of arguments supplied to the prog
 * argc is an integer
 * @argv : array of pointers to the strings which are those args
 * argv is an array of pointers of char (string array)
 *
 * Return: 0.
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
	{
		printf("%s\n", *(argv + i));
	}

	return (0);
}
