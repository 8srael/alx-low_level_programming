#include "main.h"
#include <stdlib.h>
#include <string.h>

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

	wrapper = (char *) malloc((sizeof(char) * strlen(str)) + 1);

	if (wrapper == NULL)
		return (NULL);

	strcpy(wrapper, str);

	return (wrapper);
}
