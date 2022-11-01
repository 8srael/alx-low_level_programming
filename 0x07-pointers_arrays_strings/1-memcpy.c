#include "main.h"

/**
 * _memcpy - function that copies memory area.
 *
 * @dest : a pointer to a destination memory address
 * @src : a pointer to a source memory address
 * @n : number of bytes that we want to copy
 *
 * Return: a pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	return (dest);
}
