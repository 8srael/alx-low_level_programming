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

/**
 * _puts - function that prints a string, followed by a new line, to stdout
 *
 *  @str : string (array of char)
 */
void _puts(char *str);

/**
 * print_rev - function that prints a string, in reverse,
 * followed by a new line
 *
 * @s : string (array of char)
 */
void print_rev(char *s);

/**
 * rev_string - function that prints a string
 *
 * @s : string (array of char)
 */
void rev_string(char *s);

/**
 * puts2 - function that prints every other character of a string,
 * starting with the first character,
 * followed by a new line
 *
 * @str : string (array of char)
 */
void puts2(char *str);

#endif
