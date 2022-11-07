#include "main.h"
#include <stdlib.h>
#include "9-strcpy.c"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str : a string (array of char)
 *
 * Return: pointer to the newly allocated space...
 * NULL if str = NULL and insufficient memory
*/

char *_strdup(char *str)
{
	char *wrapper;

	if (str == NULL)
		return (NULL);

	wrapper = (char *) malloc((sizeof(char) * _strlen(str)));

	if (wrapper == NULL)
		return (NULL);

	_strcpy(wrapper, str);

	return (wrapper);
}
