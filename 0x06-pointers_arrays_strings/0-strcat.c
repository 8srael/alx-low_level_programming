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
	y = 0;


	while (*(src + y) != '\0')
	{
		*(dest + x) = *(src + y);
		x++;
		y++;
	}

	*(dest + x) = '\0';

	return (dest);
}
