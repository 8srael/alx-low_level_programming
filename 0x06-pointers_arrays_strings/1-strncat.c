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
	
	x = _strlen(dest);
	y = 0;


	while (*(src + y) != *(src + n))
	{
		*(dest + x) = *(src + y);
		x++;
		y++;
	}

	*(dest + x) = '\0';

	return (dest);
}
