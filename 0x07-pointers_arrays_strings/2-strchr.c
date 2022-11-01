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

	while (*s != '\0')
	{
		if (*s != c)
			s++;
		else
			return (s);

	}

	if (c == '\0')
		return (s);

	return (NULL);
}
