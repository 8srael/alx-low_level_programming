#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, followed by a new line
 * by using putchar function.
 * Return: 0 if program runs succesfully.
*/

int main(void)
{
	char carac1, carac2;

	for (carac1 = '0' ; carac1 <= '9' ; carac1++)
	{
		for (carac2 = '0' ; carac2 <= '9' ; carac2++)
		{
			putchar(carac1);
			putchar(carac2);
			if (carac1 != '9' || carac2 != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
