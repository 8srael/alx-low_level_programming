#ifndef _MAIN_H_
#define _MAIN_H_

/**
 * _isupper - function that checks for uppercase character
 * @c : character that we want to check
 * Return: 1 if c is uppercase , 0 otherwise
*/
int _isupper(int c);

/**
 * _isupper - function that checks for a digit
 * (0 through 9)
 * @c : character that we want to check
 * Return: 1 if c is a digit , 0 otherwise
*/
int _isdigit(int c);

/**
 * mul - function that multiplies two integers.
 * @a : first integer
 * @b : second integer
 * Return: the result of a * b
*/
int mul(int a, int b);

/**
 * print_numbers - function that prints the numbers, from 0 to 9,
 * followed by a new line.
 * use _putchar twice in code
*/
void print_numbers(void);

/**
 * _putchar - writes the character c
 * @c: parameter that you want to print
 * Return: 1 or 0
*/
int _putchar(char c);

#endif
