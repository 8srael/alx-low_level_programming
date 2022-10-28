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

char rot13_char(char i)
{
	int c = (int)i;

	if (c >= 97 && c <= 122)
	{
		c = c + 13;
		if (c > 122)
		{
			c = c - 122;
			c = 97 + c - 1;
		}
	}
	if (c >= 65 && c <= 90)
	{
		c = c + 13;
		if (c > 90)
		{
       			c = c - 90;
			c = 65 + c - 1;
		}
	}
	return (c);
}
