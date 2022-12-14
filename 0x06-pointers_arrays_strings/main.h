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

/**
 * strncpy - function that copies a string
 * he copies n bytes of a source string into buffter of a destination else
 *
 * @dest : pointer to a char
 * @src : pointer to a char
 * @n : number of bytes
 *
 * Return: string copied
 */
char *_strncpy(char *dest, char *src, int n);

/**
 * _strcmp - function that comapres two strings
 *
 * @s1 : first string
 * @s2 : second string
 *
 * Return: an integer positive or negative
 */
int _strcmp(char *s1, char *s2);

/**
 * reverse_array - function that reverses the content of an array of int
 *
 * @a : array of int
 * @n : numbers of elemets of the array
 */
void reverse_array(int *a, int n);

/**
 * string_upper - function that changes all lowercase letters
 * of a string to uppercase.
 *
 * @s : string
 *
 * Return: string uppercase
 */
char *string_toupper(char *s);

/**
 * is_separator - function that verify if a char is a separator
 *
 * @character : a character
 *
 * Return: 1 if it's the case, -1 otherwise
 */
int is_separator(char character);

/**
 * cap_string - function that capitalizes all words of a string
 *
 * @str : string (array of char)
 *
 * Return: string with all words capitalized
 */
char *cap_string(char *str);

/*
 * leet - function that encodes a string into 1337.
 *
 * @s : a string
 *
 * Return: string encoded
 */
char *leet(char *s);

/**
 * rot13 - function that encodes a string using rot13.
 *
 * @s : string
 *
 * Return: string encrypted
 */
char *rot13(char *s);

/**
 * rot13_char - function that encode a character using rot13
 *
 * @c : a character
 *
 * Return: character encrypted
 */
char rot13_char(char c);

/**
 * print_number - function that prints an integer.
 *
 * @n : an integer
 */
void print_number(int n);

/**
 * infinite_add - function that adds two numbers.
 *
 * @n1 : first number
 * @n2 : second number
 * @r : buffer for result
 * @size_r: buffer size
 *
 * Return: the pointer to r or 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r);

/**
 * print_line - prints bytes of a buffer
 *
 * @b :  buffer to print
 * @size : bytes of buffer to print
 * @line : line of buffer to print
 */
void print_line(char *b, int size, int line);

/**
 * print_buffer - function that prints a buffer.
 *
 * @b : buffer to print
 * @size : size of buffer
 */
void print_buffer(char *b, int size);
#endif
