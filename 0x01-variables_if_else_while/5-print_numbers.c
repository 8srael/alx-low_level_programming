#include <stdio.h>
/**
 * main - prints all single digit numbers ,
 * of base 10 ,
 * starting from 0 ,
 * followed by a new line
 * Return: 0 if program runs succesfully.
*/

int main(void)
{
	int number = 0;

	while (number < 10)
	{
		printf("%d", number);
		number++;
	}
	putchar('\n');
	return (0);
}
