#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 *
 * @s : a pointer to a memory address
 * @b : constant byte that we want to fill
 * @n : number of bytes
 *
 * Return: a pointer to s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(s + i) = b;
		i++;
	}

	return (s);
}
