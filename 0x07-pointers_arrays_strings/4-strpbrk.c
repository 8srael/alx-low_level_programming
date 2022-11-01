#include "main.h"
#include <stdlib.h>

/**
 * _strchr - function that locates a character in a string.
 *
 * @s : a string
 * @c : a character
 *
 * Return: a pointer to the first occurence of c in s, NULL if c isn't found
*/

char *_strchr(char *s, char c)
{
	int j;

	while (*s != '\0')
	{

		for (j = 0 ; accept[j] ; j++)
		{
			if(*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
