#include "main.h"

/**
 * _islower - checks for lowercase character.
 * @c : character that you want to check
 *
 * Return: 0 if c is a lowercase, 0 otherwise.
*/

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
