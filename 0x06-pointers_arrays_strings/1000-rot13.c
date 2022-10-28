#include "main.h"

/**
 * rot13 - function that encryptsstring using rot13
 *
 * @s : string
 *
 * Return: string encrypted
*/

char *rot13(char *s)
{
	int i;

	for (i = 0 ; *(s + i) != '\0' ; i++)
	{
		*(s + i) = rot13_char(*(s + i));
	}

	return (s);
}

/**
 * rot13_char - function that encodes a char using rot13
 *
 * @c : a character
 *
 * Return: character encrypted
 */

char rot13_char(char c)
{
	int i = (int)c;

	if (i >= 97 && i <= 122)
	{
		i = i + 13;
		if (i > 122)
		{
			i = i - 122;
			i = 97 + i - 1;
		}
	}
	if (i >= 65 && i <= 90)
	{
		i = i + 13;
		if (i > 90)
		{
			i = i - 90;
			i = 65 + i - 1;
		}
	}
	return (i);
}
