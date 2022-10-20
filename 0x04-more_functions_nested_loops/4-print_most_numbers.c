#include "main.h"

/**
 * print_numbers - prints the numbers,
 * from 0 to 9, followed by a new line.
 * by using the function _putchar in main.h
 *
 * Return: 0 if program runs succesfully.
*/

void print_numbers(void)
{
	int c;

	for (c = 48 ; c < 58 ; c++)
	{
		if (c != 50 && c != 52)
			_putchar(c);
	}
	_putchar('\n');
}
