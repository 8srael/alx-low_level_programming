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
	int money;
	int coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (*(argv + 1)[0] == '-')
		printf("0\n");

	money = atoi(*(argv + 1));

	coins += money / 25;
	money = money % 25;

	coins += money / 10;
	money = money % 10;

	coins += money / 5;
	money = money % 5;

	coins += money / 2;
	money = money % 2;

	coins += money / 1;

	printf("%d\n", coins);

	return (0);
}
