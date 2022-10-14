#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, followed by a new line
 * expect letters 'q' and 'e'
 * by using putchar function.
 *
 *
 * Return: 0 if program runs succesfully.
*/

int main(void)
{
	char carac;

	for (carac = 'a' ; carac < '{' ; carac++)
	{
		if (carac != 'q' && carac != 'e')
			putchar(carac);
	}
	putchar('\n');
	return (0);
}
