#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 *
 * @str : string
 *
 * Return: string with all words capitalized
*/

char *cap_string(char *str)
{
	int i;
	int n1, n2;

	for (i = 0 ; *(str + i) != '\0' ; i++)
	{
		n1 = is_separator(*(str + i));
		n2 = is_separator(*(str + i - 1));

		if (n1)
			continue;

		if (*(str + i) > '`' && *(str + i) < '{' && (n2 || i == 0))
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

	char a[13] = {' ', '\t', '\n', ';', ',', '.', '!', '?', '"',
	'(', ')', '{', '}'};

	for (i = 0 ; i < 13 ; i++)
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
