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
	int i = 0;
	int len, half;

	len = _strlen(str);
	half = (len % 2 == 0) ? len / 2 : (len - 1) / 2;

	for (i = half + 1 ; i < len ; i += 1)
		_putchar(*(str + i));

	_putchar('\n');
}
