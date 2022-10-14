#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 * and then in uppercase , followed by a new line .
 *
 * by using putchar function.
 * Return: 0 if program runs succesfully.
*/

int main(void)
{
	char carac;

	for (carac = 'a' ; carac <= 'z' ; carac++)
		putchar(carac);
	for (carac = 'A' ; carac < '[' ; carac++)
		putchar(carac);
	putchar('\n');
	return (0);
}
