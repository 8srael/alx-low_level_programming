#include "main.h"
#include "2-strlen.c"

/**
 * infinite_add - function that adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer for result
 * @size_r: buffer size
 *
 * Return: pointer to r or 0
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a, b, c, d, e, f;

	a = _strlen(n1);
	b = _strlen(n2);
	e = 0;

	if (a > size_r || b > size_r)
		return (0);
	for (a -= 1, b -= 1, c = 0; c < size_r - 1; a--, b--, c++)
	{
		f = e;
		if (a >= 0)
			f += *(n1 + a) - '0';
		if (b >= 0)
			f += *(n2 + b) - '0';
		if (a < 0 && b < 0 && f == 0)
			break;
		e = f / 10;
		*(r + c) = f % 10 + '0';
	}
	*(r + c) = '\0';
	if (a >= 0 || b >= 0 || e)
		return (0);
	for (c -= 1, d = 0; d < c; c--, d++)
	{
		e = *(r + c);
		*(r + c) = *(r + d);
		*(r + d) = e;
	}
	return (r);
}
