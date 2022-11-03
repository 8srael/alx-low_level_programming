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

/**
 * factoriel - function that calculates factorial of a given number
 * Factorial of 0 is 1
 *
 * @n : an integer
 *
 * Return: if n is lower than 0, the function should return -1
 * to indicate an error, otherwise the factoriel of the number
 */
int factorial(int n);

/**
 * _pow_recursion - function that calculates the power of a number
 *
 * @x : an integer
 * @y : an integer
 *
 * Return:  value of x raised to the power of y
 * - 1 if y is lower than 0
 */
int _pow_recursion(int x, int y);

/**
 * _sqrt_recursion - function that calculates natural square of a given number
 *
 * @n : an integer
 *
 * Return: natural square root of n
 * -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n);

/**
 * is_prime_number - function that checks if an integer is a prime number
 *
 * @n : an integer
 *
 * Return: 1 if the input integer is a prime number,
 * otherwise return 0
 */
int is_prime_number(int n);

/**
 * is_palindrome - function that checks if a string is a palindrome or not
 *
 * @s : a string
 *
 * Return: 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s);

/**
 * wildcmp - function that compares two strings
 *
 * @s1 : first string
 * @s2 : second string
 *
 * Return: 1 if the strings can be considered identical,
 * otherwise return 0
 */
int wildcmp(char *s1, char *s2);

#endif
