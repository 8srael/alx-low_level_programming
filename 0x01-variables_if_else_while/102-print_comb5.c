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

	for (carac1 = 0 ; carac1 < 100 ; carac1++)
	{
		for (carac2 = carac1 + 1 ; carac2 < 100 ; carac2++)
		{
			if (carac1 < carac2)
			{
				putchar((carac1 / 10) + 48);
				putchar((carac1 % 10) + 48);
				putchar(' ');
				putchar((carac2 / 10) + 48);
				putchar((carac2 % 10) + 48);

				if (carac1 != 98 || carac2 != 99)
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
