#ifndef _MAIN_H_
#define _MAIN_H_

/**
 * _putchar - writes the character c
 * @c: parameter that you want to print
 * Return: 1 or 0
*/
int _putchar(char c);

/**
 *  print_alphabet - function that prints alphabet in lowercase
 *  followed by a new line
*/
void print_alphabet(void);

/**
 * print_alphabet_x10 - function that prints 10 times the alphabet
 * followed by a new line
*/
void print_alphabet_x10(void);

/**
 * _islower - function that checks for lowercase character
 * @c : parameter that you want to check
 * Return: 1 if c is lowercase , 0 otherwise
*/
int _islower(int c);

/**
 * _islower - function that checks for alphabetic character
 * @c : parameter that you want to check
 * Return: 1 if c is a letter lowwercase or uppercase
 * 0 otherwise.
*/
int _isalpha(int c);

/**
 * print_sign - function that prints the sign of a number
 * @n : parameter that you want to print his sign
 * Return: 1 and prints + if n is greater than zero
 * 0 and prints 0 if n is zero
 * -1 and prints - if n is less than zero
*/
int print_sign(int n);

/**
 * _abs - function that computes the absolute value of an integer.
 * @n : parameter that you want to know his absolute value
 * Return: absolute value of n
*/
int _abs(int n);

#endif
