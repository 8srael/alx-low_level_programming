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
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 *
 * @size : array size
 * @c : a character
 *
 * Return: a pointer to the array
 * NULL if size = 0 and if it fails
 */
char *create_array(unsigned int size, char c);
#endif
