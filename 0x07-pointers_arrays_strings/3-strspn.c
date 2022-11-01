#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 *
 * @s : a pointer to memory address
 * @accept : prefix substring
 *
 * Return: number of bytes in the initial segment of s
 * which consist only of bytes from accepy
*/

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int length = 0;

	for (i = 0 ; *(s + i) != '\0' ; i++)
	{
		if(*(s + i) != ' ')
		{
			for (j = 0 ; *(accept + j) != '\0' ; j++)
			{
				if (*(s + i) == *(accept + j))
					length++;
			}
		}
		else
			return (length);
	}

	return (length);
}
