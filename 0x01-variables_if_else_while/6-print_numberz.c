#include <stdio.h>
/**
 * main - prints all single digit numbers ,
 * starting from 0 ,
 * followed by new line ,
 * Dont' use variable of type char ,
 * Use only putchar function ,
 * Use putchar twice in your code ,
 * All your code should be in the main function .
 *
 * Return: 0 if program runs succesfully.
*/

int main(void)
{
	int number;

	for (number = 48 ; number <= 57 ; number++)
		putchar(number);
	putchar('\n');
	return (0);
}
