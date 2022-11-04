#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins for an amount of money
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
	int cash, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (*(argv + 1)[0] == '-')
	{
		printf("0\n");
		return (0);
	}

	cash = atoi(*(argv + 1));

	coins += cash / 25;
	cash = cash % 25;

	coins += cash / 10;
	cash = cash % 10;

	coins += cash / 5;
	cash = cash % 5;

	coins += cash / 2;
	cash = cash % 2;

	coins += cash / 1;

	printf("%d\n", coins);
	return (0);
}
