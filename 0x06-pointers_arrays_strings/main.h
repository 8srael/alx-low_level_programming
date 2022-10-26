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
 * _strcat - function concatenates two strings
 * It appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte
 *
 * @dest : pointer to a char
 * @src : pointer to a char
 *
 * Return: a pointer to dest
 */
char *_strcat(char *dest, char *src);

/**
 * _strncat - function that concatenates two strings
 * the _strncat function is similar to the _strcat function,
 * except that it will use at most n bytes from src;
 * and src does not need to be null-terminated if it contains n or
 * more bytes
 *
 *  @dest : pointer to a char
 *  @src : pointer to a char
 *  @n : number of bytes
 *
 *  Return: a pointer to dest
 */
char *_strncat(char *dest, char *src, int n);

#endif
