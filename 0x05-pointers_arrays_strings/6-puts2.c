#include "main.h"
#include "2-strlen.c"

/**
 * puts2 -  prints every other character of a string
 * starting with the first character
 *
 * @str : string (array of char)
*/

void puts2(char *str)
{
	int i = 0;
	int len = _strlen(str);

	for (i = 0 ; i < len ; i += 2)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
