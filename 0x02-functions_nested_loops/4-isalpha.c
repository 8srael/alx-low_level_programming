#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 * @c : character that you want to check
 *
 * Return: 1 if c is a letter, lowercase or uppercase
 * 0 otherwise.
*/

int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c >= 65 && c < 90))
		return (1);
	else
		return (0);
}
