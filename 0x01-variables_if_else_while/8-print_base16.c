#include <stdio.h>
/**
 * main - prints  all the numbers of base 16 in lowercase ,
 * followed by a new line ,
 * by using putchar function .
 *
 * Return: 0 if program runs succesfully.
*/

int main(void)
{
	char carac;

	for (carac = 48 ; carac < 58 ; carac++)
		putchar(carac);
	for (carac = 97 ; carac < 103 ; carac++)
		putchar(carac);
	putchar('\n');
	return (0);
}
