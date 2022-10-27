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
	int x, y;

	x = 0;
	y = 0;

	while (*(dest + x) != '\0')
		x++;

	while (*(src + y) != '\0' && y < n)
	{
		*(dest + x) = *(src + y);
		x++;
		y++;
	}

	*(dest + x) = '\0';

	return (dest);
}
