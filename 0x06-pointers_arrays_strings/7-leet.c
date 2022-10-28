#include "main.h"

/**
 * leet - function that encodes a string into 1337
 *
 * @s : string
 *
 * Return: string encoded
*/

char *leet(char *s)
{
	char alpha1337[] = "a4A4e3E3o0O0t7T7l1L1";

	int i;
	int j;

	for (i = 0 ; *(s + i) != '\0' ; i++)
	{
		for (j = 0 ; alpha1337[j] != '\0' ; j++)
		{
			if (s[i] == alpha1337[j])
			{
				s[i] = alpha1337[j + 1];
				break;
			}
		}
	}

	return (s);
}
