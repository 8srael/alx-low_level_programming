#ifndef _MAIN_H_
#define _MAIN_H_

/**
 * _putchar - writes the character c
 *
 * @c: parameter that you want to print
 * Return: 1 or 0
*/
int _putchar(char c);

/**
 *  reset_to_98 - function that takes a pointer to an int as parameter
 *
 *  and updates the value it points to to 98.
 *  @n : pointer to an int
 */
void reset_to_98(int *n);

/**
 * swap_int - function that swaps the values of two integers.
 *
 * @a : pointer to an int
 * @b : pointer to an int
 */
void swap_int(int *a, int *b);

/**
 * _strlen - function that returns the length of a string
 *
 * @s : string (array of char)
 *
 * Return: the length of the string in param
 */
int _strlen(char *s);
#endif
