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
 * @c : parameter that we want to check
 * Return: 1 if c is lowercase , 0 otherwise
*/
int _islower(int c);

/**
 * _islower - function that checks for alphabetic character
 * @c : parameter that we want to check
 * Return: 1 if c is a letter lowwercase or uppercase
 * 0 otherwise.
*/
int _isalpha(int c);

/**
 * print_sign - function that prints the sign of a number
 * @n : parameter that we want to print his sign
 * Return: 1 and prints + if n is greater than zero
 * 0 and prints 0 if n is zero
 * -1 and prints - if n is less than zero
*/
int print_sign(int n);

/**
 * _abs - function that computes the absolute value of an integer.
 * @n : parameter that we want to know his absolute value
 * Return: absolute value of n
*/
int _abs(int n);

/**
 * print_last_digit - function that prints the last digit of a number.
 * @number : parameter that we want to print his last digit
 * Return: the value of the last digit.
*/
int print_last_digit(int number);

/**
 * jack_bauer - function that prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
*/
void jack_bauer(void);

/**
 * times_table - function that prints the 9 times table, starting with 0.
*/
void times_table(void);

/**
 * add - function that adds two integers and returns the result.
 * @a : first number
 * @b : second number
 * Return: the sum of a and b
*/
int add(int a, int b);

/**
 * print_to_98 - function that prints all natural numbers from n to 98,
 * followed by a new line.
 * Numbers must be separated by a comma, followed by a space
 * Numbers should be printed in order
 * The first printed number should be the number passed to your function
 * The last printed number should be 98.
 * @n : parameter
*/
void print_to_98(int n);
#endif
