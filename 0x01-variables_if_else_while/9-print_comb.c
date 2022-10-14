#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers
 * Numbers must be separated by ',' , followed by a space
 * Numbers should be printed in ascending order
 * by using putchar function.
 *
 * Return: 0 if program runs succesfully.
*/

int main(void)
{
	char carac;

	for (carac = '0' ; carac < ':' ; carac++)
	{
		putchar(carac);
		if (carac != '9')
		{
			putchar(',');
			putchar(' ');
		}

	}
	putchar('\n');
	return (0);
}
