#include "main.h"
#include "2-strlen.c"

/**
 * print_rev -  prints a string, in reverse,
 * followed by a new line
 *
 * @str : string (array of char)
*/

void print_rev(char *str)
{
	int i;
	int len = _strlen(str);

	for (i = len ; i >= 0 ; i--)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
