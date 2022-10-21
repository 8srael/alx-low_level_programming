#include <stdio.h>

/**
 * main - finds and prints the largest prime factor
 * of the number 612852475143, followed by a new line.
 *
 * Return: 0 if program runs successfuly
*/

int main(void)
{
	unsigned long number = 612852475143;
	unsigned long prime = 2;

	while (prime < number)
	{
		if (number % prime == 0)
		{
			number /= prime;
			prime = 2;
		}
		else
			prime++;
	}
	printf("%lu\n", number);

	return (0);
}
