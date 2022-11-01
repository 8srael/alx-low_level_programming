#include "main.h"
#include <stdlib.h>

/**
 * _strstr - function that locates a string
 *
 * @haystack: the longer string to search
 * @needle: the first occurrence of the substring
 *
 * Return: a pointer to the byte or Null if it not found
*/

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0 ; *(haystack + i) != '\0'; i++)
	{
		for (j = 0; *(needle + j) != '\0'; j++)
		{
			if (*(haystack + i + j) != *(needle + j))
				break;
		}
		if (*(needle + j) == '\0')
			return (&*(haystack + i));
	}
	return (NULL);
}
