#include "main.h"
#include "2-strlen.c"

/**
 * string_toupper - function that changes all lowercase letters
 * of a string to uppercase
 *
 * @s : string
 *
 * Return: the upper string
*/

char *string_toupper(char *s)
{
	int i;

	for (i = 0 ; *(s + i) != '\0' ; i++)
		if (*(s + i) > '`' && *(s + i) < '{')
			*(s + i) = *(s + i) - 32;


	return (s);
}
