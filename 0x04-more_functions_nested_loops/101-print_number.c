#include "main.h"

/**
 * print_number - prints a integer
 *
 * @n : integer that we want to print
*/

void print_number(int n)
{
	unsigned int number, digit, natural = n;
	double flag = 1;

	if (n == 0)
		_putchar(48);
	else
	{
		if (n < 0)
		{
			natural = n * -1;
			_putchar('-');
		}

		while (flag <= natural)
			flag *= 10;
		number = flag / 10;

		while (number >= 1)
		{
			digit = natural / number;
			_putchar(digit + '0');
			natural = (natural - (number * digit));
			number /= 10;
		}
	}
}
