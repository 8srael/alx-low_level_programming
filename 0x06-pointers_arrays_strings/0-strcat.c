#include "main.h"
#include "2-strlen.c"

/**
 * _strcat - function that concatenates two strings
 *
 * @dest : a pointer to a char
 * @src : string (array of char)
 *
 * Return: the pointer to dest
*/

char *_strcat(char *dest, char *src)
{
	int x, y;

	x = _strlen(dest);

	for (y = 0 ; *(src + y) != '\0' ; y++)
	{
		*(dest + x) = *(src + y);
		x++;
	}
	*(dest + x) = '\0';

	return (dest);
}
