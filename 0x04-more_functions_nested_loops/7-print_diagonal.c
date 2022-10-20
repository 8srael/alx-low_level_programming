#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal.
 *
 * @n : number of times the character / should be printed
*/

void print_diagonal(int n)
{
	int x;
	int y;

	if (n > 0)
	{
		for (x = 1 ; x < n + 1 ; x++)
		{
			for (y = 0 ; y < x - 1 ; y++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
