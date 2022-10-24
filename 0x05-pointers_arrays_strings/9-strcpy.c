#include "main.h"
#include "2-strlen.c"
#include <stdio.h>

/**
 * _strcpy - function that copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest .
 *
 * @dest : a pointer to a char
 * @src : string (array of char)
 *
 * Return: the pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int i;
	int src_len;

	src_len = _strlen(src);

	for (i = 0 ; i < src_len ; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
