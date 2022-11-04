#include <stdio.h>
#include <stdlib.h>

/**
 * is_dig - checck that arg is a number
 *
 * @arg : a string
 *
 * Return: 1 if entire string is a number, 0 otherwise
 */

int is_dig(char *arg)
{
	int d;

	for (d = 0 ; *(arg + d) != '\0' ; d++)
	{
		if (*(arg + d) <= 47 || *(arg + d) >= 58)
			return (0);
	}
	return (1);
}

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

	if (argc < 2)
	{
		printf("%d\n", sum);
		return (0);
	}

	for (i = 1 ; i < argc ; i++)
	{
		if (is_dig(*(argv + i)) == 0)
		{
			printf("Error\n");
			return (1);
		}
		else
			sum += atoi(*(argv + i));
	}
	printf("%d\n", sum);

	return (0);
}
