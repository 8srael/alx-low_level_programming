#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits.
 * print only the smallest combination of three digits
 * by using putchar function.
 * Maximum using putchar : 6
 *
 *
 * Return: 0 if program runs succesfully.
*/

int main(void)
{
	int carac1, carac2, carac3;

	for (carac1 = 48 ; carac1 < 58 ; carac1++)
	{
		for (carac2 = carac1 + 1 ; carac2 < 58 ; carac2++)
		{
			for (carac3 = carac2 + 1 ; carac3 < 58 ; carac3++)
			{
				putchar(carac1);
				putchar(carac2);
				putchar(carac3);

				if (carac1 != 55 || carac2 != 56 || carac3 != 57)
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
