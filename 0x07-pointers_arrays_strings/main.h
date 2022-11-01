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
 * _memset - function that fills memory with a constant byte.
 *
 * @s : string
 * @b : constant byte
 * @n : number of bytes
 *
 * Return: a pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n);

/**
 * _memcpy - function that copies memory area.
 *
 * @dest : destination
 * @src : source
 * @n : number of bytes that we want to copy
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n);

#endif
