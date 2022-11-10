#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function that concatenates two strings
 *
 * @s1 : first string
 * @s2 : second string
 * @n : memory allocated size
 *
 * Return: a pointer to a newly allocated space in memory which contains the
 * contents of s1, followed by the contents of s2, and null terminated
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *final_string;
	unsigned int i, j, k;

	if (s1 == NULL)
		i = 0;
	else
		i = strlen(s1);
	if (s2 == NULL)
		j = 0;
	else
		j = strlen(s2);

	if (j > n)
		j = n;

	final_string = malloc((sizeof(char) * (i + j + 1)));

	if (final_string == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		*(final_string + k) = *(s1 + k);

	for (k = 0; k < j; k++)
		*(final_string + k + i) = *(s2 + k);

	*(final_string + i + j) = '\0';

	return (final_string);
}
