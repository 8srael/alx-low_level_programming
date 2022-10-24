#include "main.h"
#include "2-strlen.c"

/**
 * _puts -  prints a string,
 * followed by a new line, to stdout
 *
 * @str : string (array of char)
*/

void _puts(char *str)
{
	int i;
	int len = _strlen(str);

	for (i = 0 ; i < len ; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
