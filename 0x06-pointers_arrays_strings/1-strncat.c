#include "main.h"
#include "2-strlen.c"

/**
 * _strncat - function that concatenates two strings
 * with n bytes maximum
 *
 * @dest : a pointer to a char
 * @src : string (array of char)
 * @n : number of bytes
 *
 * Return: the pointer to dest, concatenated string
*/

char *_strncat(char *dest, char *src, int n)
{
	int i;

	while (*dest)
		dest++;


	for (i = 0 ; i < n ; ++i)
	{
		while (*src)
		{
			*dest = *src;
			dest++;
			src++;
		}
	}
	*dest = '\0';

	return (dest);
}
