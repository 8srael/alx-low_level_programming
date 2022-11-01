#include "main.h"

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
	unsigned int i = 0, j = 0;

	while (*(haystack + i) != '\0')
	{

		while (*(needle + j) != '\0' && (*(haystack + i) == *needle))
		{
			if (*(haystack + i + j) == *(needle + j))
				j++;
			else
				break;
		}
		if (*(needle + j) != '\0')
		{
			j++;
			j = 0;
		}
		else
			return (haystack + i);
	}
	return (0);
}
