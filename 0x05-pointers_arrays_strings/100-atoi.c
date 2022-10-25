#include "main.h"
#include "2-strlen.c"

/**
 * _atoi - converts a string to an integer
 *
 * @s : string to be converted
 *
 * Return: the int converted to string
*/

int _atoi(char *s)
{
	int i, count, n_moins, len, dig;
	int integer;

	i = 0;
	count = 0;
	n_moins = 0;
	len = _strlen(s);
	dig = 0;
	integer = 0;

	while (i < len && count == 0)
	{
		if (s[i] == '-')
			n_moins++;

		if (s[i] > '/' && s[i] < ':')
		{
			dig = *(s + i) - '0';
			if (n_moins % 2)
				dig = -dig;
			integer = integer * 10 + dig;
			count = 1;

			if (*(s + i + 1) < '0' || *(s + i + 1) > '9')
				break;
			count = 0;
		}
		i++;
	}

	if (count == 0)
		integer = 0;

	return (integer);
}
