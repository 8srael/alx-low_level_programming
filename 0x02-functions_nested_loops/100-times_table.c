#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0 .
 * @n : param
*/
void print_times_table(int n)
{
	int x;
	int y;

	if (n >= 0 && n <= 15)
	{
		for (x = 0 ; x < n + 1 ; x++)
		{
			for (y = 0 ; y < n + 1 ; y++)
			{
				int mul = x * y;

				if (y == 0)
				{
					_putchar('0');
				} else if (mul < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(mul + '0');
				} else if (mul < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(mul / 10 + '0');
					_putchar(mul % 10 + '0');
				} else
				{
					_putchar(',');
					_putchar(' ');
					_putchar('0' + mul / 100);
					_putchar('0' + (mul / 10) % 10);
					_putchar('0' + mul % 10);
				}
			}
			_putchar('\n');
		}
	}
}
