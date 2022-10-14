#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, followed by a new line
 * by using putchar function.
 * Return: 0 if program runs succesfully.
*/

int main(void)
{
	char carac;

	for (carac = 'a' ; carac < '{' ; carac++)
		putchar(carac);
	putchar('\n');
	return (0);
}
