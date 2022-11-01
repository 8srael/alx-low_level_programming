#include "main.h"
#include <stddef.h>
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
	unsigned int i, j;
	char *first;

	i = 0;

	for (i = 0 ; *(s + i) != c ; i++)
	{}

	if (i == 0)
		first = NULL;
	else
	{
		first = malloc(i * sizeof(char));
		j = 0;

		for (j = i ; *(s + j) != '\0' ; j++)
			*(first + j - i) = *(s + j);

		*(first + j - i) = '\0';
	}

	return (first);
}
