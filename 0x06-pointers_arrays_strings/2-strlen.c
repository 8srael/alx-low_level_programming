#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s : string (array of char)
 *
 * Return: the lenght of s
*/

int _strlen(char *s)
{
	int counter;

	for (counter = 0 ; *(s + counter) != '\0' ; counter++)
	{}

	return (counter);
}
