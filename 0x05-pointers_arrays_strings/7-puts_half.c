#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - prints half of a string, followed by a new line
 * The function should print the second half of the string
 * If the number of characters is odd,
 * the function should print the last n characters of the string,
 * where n = (length_of_the_string - 1) / 2
 *
 * @str : string (array of char)
*/

void puts_half(char *str)
{
	int i, j, len, half;

	len = _strlen(str);
	half = (len % 2 == 0) ? len / 2 : (len - 1) / 2;

	if (len % 2 == 0)
	{
		for (i = half ; i < len ; i++)
		{
			_putchar(*(str + i));
		}
	}
	else
	{
		for (j = half ; j < len - 1 ; j++)
		{
			_putchar(*(str + j + 1));
		}
	}
	_putchar('\n');
}
