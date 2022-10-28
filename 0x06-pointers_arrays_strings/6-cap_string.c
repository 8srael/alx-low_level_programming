#include "main.h"
#include <stdio.h>

/**
 * cap_string - function that capitalizes all words of a string
 *
 * @str : string
 *
 * Return: string with all words capitalized
*/

char *cap_string(char *str)
{
	int is_sep;
	int i;

	for (i = 0 ; *(str + i) != '\0' ; i++)
	{
		if (i != 0)
			is_sep = is_separator(*(str + i - 1));

		if (is_sep && (*(str + i) >= '`' && *(str + i) <= '{'))
			*(str + i) = *(str + i) - 32;
	}
	return (str);
}

/**
 * is_separator - verify if a character is a separator of words
 *
 * @character : a character
 *
 * Return: 1 if i'ts the case, 0 otherwise
 */
int is_separator(char character)
{
	int i, result;

	char a[12] = {' ', '\t', '\n', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	for (i = 0 ; i < 12 ; i++)
	{
		if (a[i] == character)
		{
			result = 1;
			break;
		}
		else
			result = 0;
	}

	return (result);
}
