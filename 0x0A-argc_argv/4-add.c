#include <stdio.h>
#include <stdlib.h>

/**
 * main - add positive numbers
 *
 * @argc : number of arguments supplied to the prog
 * argc is an integer
 * @argv : array of pointers to the strings which are those args
 * argv is an array of pointers of char (string array)
 *
 * Return: 0 if one number or more are passed to the prog,
 * 1 otherwise and if one of the number contains symbols
 * that are not digits
*/

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc < 1)
	{
		printf("%d\n", sum);
		return (0);
	}

	for (i = 1 ; i < argc ; i++)
	{
		if (*(argv + i)[0] >= 58 || *(argv + i)[0] <= 47)
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(*(argv + i));
	}
	printf("%d\n", sum);

	return (0);
}
