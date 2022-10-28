#include "main.h"

/**
 * print_number - print an integer
 *
 * @n : an integer
*/

void print_number(int n)
{
	 double start = 1;
	 unsigned int ten, digit, natural;

	 natural = n;

	 if (n == 0)
		 _putchar('0');
	 else
	 {
		 if (n < 0)
		 {
			 natural = -1 * n ;
			 _putchar('-');

		 }

		 while (start < natural + 1)
			 start *= 10;
		 ten = start / 10;

		 while (ten >= 1)
		 {
			 digit = natural / ten;
			 _putchar(digit + '0');
			 natural = (natural -(ten * digit));
			 ten /= 10;
		 }
	 }
}
