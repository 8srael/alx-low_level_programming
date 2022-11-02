#include "main.h"

/**
 * _strlen_recursion - function that prints a string, followed by a new line
 *
 * @s : a string
 *
 * Return: the length of the string
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + _strlen_recursion(s));
}
