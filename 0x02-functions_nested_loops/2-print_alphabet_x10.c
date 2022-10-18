#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times alphabet in lowercase ,
 * followed by a new line
 * by using the function _putchar in main.h
 *
 * Return: 0 if program runs succesfully.
*/

void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0 ; i < 10 ; i++)
	{
		for (c = 'a' ; c < '{' ; c++)
			_putchar(c);
		 _putchar('\n');
	}
}
