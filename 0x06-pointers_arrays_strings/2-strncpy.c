#include "main.h"
#include "2-strlen.c"
#include <stdio.h>

/**
 * _strncpy - function that copies n bytes a string\
 * into buffer of a destination string
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest .
 *
 * @dest : a pointer to a char
 * @src : string (array of char)
 * @n : number of bytes to be copied
 *
 * Return: the pointer to dest, copied string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int src_len;

	src_len = _strlen(src);

	for (i = 0 ; i < src_len && i < n ; i++)
		*(dest + i) = *(src + i);

	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	*(dest + i) = '\0';

	return (dest);
}
