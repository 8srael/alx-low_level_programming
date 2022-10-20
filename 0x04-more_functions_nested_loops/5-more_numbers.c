#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, 
 * from 0 to 14, followed by a new line
 * by using the function _putchar in main.h
 *
 * Return: 0 if program runs succesfully.
*/

void more_numbers(void)
{
	int i;
	char n;

	for (i = 0 ; i < 10 ; i++)
	{
		for (n = 0 ; n < 15 ; n++)
		{
			if(n / 10 != 0)
				_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		 _putchar('\n');
	}
}
