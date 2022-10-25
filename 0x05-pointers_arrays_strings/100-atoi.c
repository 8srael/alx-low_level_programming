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
	int i, count, n_plus_moins, len, mul, integer;

	count = 0;
	n_plus_moins = 0;
	len = _strlen(s);
	mul = 1;
	integer = 0;

	for (i = 0 ; i < len ; i++)
	{
		if ((s[i] <= '/' || s[i] >= ':') && count > 0)
			break;
		if (s[i] == '-')
			n_plus_moins--;
		if (s[i] == '+')
			n_plus_moins++;

		if (s[i] > '/' && s[i] < ':')
			count++;
	}

	while (count > 0)
	{
		integer += ((s[i - 1] - '0') * mul);
		i--;
		count--;
		mul = mul * 10;
	}
	if (n_plus_moins >= 0)
		integer *= 1;
	else
		integer *= -1;

	return (integer);
}
