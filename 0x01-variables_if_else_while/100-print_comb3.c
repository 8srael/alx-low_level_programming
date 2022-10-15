#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits.
 * The two digits must be different
 * by using putchar function.
 * Maximum using putchar : 5
 *
 * Return: 0 if program runs succesfully.
*/

int main(void)
{
	int carac1, carac2;

	for (carac1 = 48 ; carac1 < 58 ; carac1++)
	{
		for (carac2 = carac1 + 1 ; carac2 < 58 ; carac2++)
		{
			if (carac1 != carac2)
			{
				putchar(carac1);
				putchar(carac2);
				if (carac1 != 56 || carac2 != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
