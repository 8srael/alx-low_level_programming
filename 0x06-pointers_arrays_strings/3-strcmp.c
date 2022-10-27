#include "main.h"
#include "2-strlen.c"
#include <stdio.h>

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
	int s1_len;
	int s2_len;
	int num_spaces;

	s1_len = _strlen(s1);
	s2_len = _strlen(s2);

	if (s1_len == s2_len)
		num_spaces = 0;
	else
		num_spaces = s1_len - s2_len;

	return (num_spaces);
}
