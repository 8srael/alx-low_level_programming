#include "main.h"
#include "2-strlen.c"

/**
 * _strcmp - function that compares two strings
 *
 * @s1 : first string
 * @s2 : second string
 *
 * Return: an integer positive or negative
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*(s1 + i) - *(s2 + i) == 0 && *(s1 + i) != '\0')
		i++;


	return (*(s1 + i) - *(s2 + i));
}
