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
 * _strcpy - function that copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 *
 * @dest : a pointer to a char
 * @src : a string
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src);

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

/*
 * _strdup - function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter
 *
 * @str : a string
 *
 * Return: a pointer to the duplicated string
 * NULL if str = NULL or insufficient memory
 */
char *_strdup(char *str);

#endif
