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

/**
 * print_most_numbers - function that prints the numbers, from 0 to 9,
 * followed by a new line.
 * Do not print 2 and 4
 * use _putchar twice in code
 */
void print_most_numbers(void);

/**
 * more_numbers - function that prints 10 times the numbers,
 * from 0 to 14, followed by a new line
 * use _putchar three times in code
 */
void more_numbers(void);

/**
 * print_line - function that draws a straight line in the terminal.
 * use only _putchar function to print
 * the line should end with a '\n'
 * if n is 0 or less, the function should only print '\n'
 * @n : number of times the character _ should be printed
*/
void print_line(int n);

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * use only _putchar function to print
 * the diagonal should end with a '\n'
 * if n is 0 or less, the function should only print a '\n'
 * @n : number of times the character \ should be printed
*/
void print_diagonal(int n);
#endif
