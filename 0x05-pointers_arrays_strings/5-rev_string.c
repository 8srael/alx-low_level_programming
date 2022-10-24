#include "main.h"
#include "2-strlen.c"

/**
 * rev_string -  reverses a string
 *
 * @s : string (array of char)
*/

void rev_string(char *s)
{
	int i = 0;
	int j = _strlen(s) - 1;
	char temp;

	for (i = 0 ; i < j ; i++, j--)
	{
		temp = *(s + i);
		*(s + i) = *(s + j);
		*(s + j) = temp;
	}
}
