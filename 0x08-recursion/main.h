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
 * _strlen - function that returns the length of a string
 *
 * @s : string (array of char)
 *
 * Return: the length of the string in param
 */
int _strlen(char *s);

/**
 * _puts_recursion - function that prints a string, followed by a new line.
 *
 * @s : string to print
 */
void _puts_recursion(char *s);

/**
 * _print_rev_recursion - function that prints a string in reverse
 *
 * @s : a string (array of char)
 */
void _print_rev_recursion(char *s);

/**
 * _strlen_recursion - function that returns the length of a string.
 *
 * @s : a string
 *
 * Return: string length
 */
int _strlen_recursion(char *s);
#endif
