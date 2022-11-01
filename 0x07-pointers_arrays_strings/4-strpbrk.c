#include "main.h"
#include <stdlib.h>

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 *
 * @s : a string
 * @accept : a string
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s != '\0')
	{

		for (j = 0 ; accept[j] ; j++)
		{
			if (*s == accept[j])
				return (s);
		}
		s++;
	}
	return (NULL);
}
