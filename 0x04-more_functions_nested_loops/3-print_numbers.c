#include "main.h"

/**
 * print_alphabet - prints alphabet in lowercase ,
 * followed by a new line
 * by using the function _putchar in main.h
 *
 * Return: 0 if program runs succesfully.
*/

void print_numbers(void)
{
	int c;

	for (c = 48 ; c < 58 ; c++)
		_putchar(c);
	_putchar('\n');
}
