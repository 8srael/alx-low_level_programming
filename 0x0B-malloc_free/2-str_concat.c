#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - function that concatenates two strings
 *
 * @s1 : first string
 * @s2 : second string
 *
 * Return: a pointer to a newly allocated space in memory which contains the
 * contents of s1, followed by the contents of s2, and null terminated
*/

char *str_concat(char *s1, char *s2)
{
	char *final_string;
	unsigned int fullSize = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	fullSize = strlen(s1) + strlen(s2) + 1;

	final_string = (char *) malloc((sizeof(char) * fullSize));

	if (final_string == NULL)
		return (NULL);

	strcat(strcat(final_string, s1), s2);

	return (final_string);
}
