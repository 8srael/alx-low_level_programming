#include <stdio.h>
/**
 * main - prints the alphabet in lowercase alphabet in reverse ,
 * followed by a new line ,
 * by using putchar function.
 *
 * Return: 0 if program runs succesfully.
*/

int main(void)
{
	char carac;

	for (carac = 'z' ; carac >= 'a' ; carac--)
		putchar(carac);
	putchar('\n');
	return (0);
}
