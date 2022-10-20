#include <stdio.h>

/**
 * main - fibonacci
 *
 * Return: 0 if program runs successfully.
*/

int main(void)
{
	int count = 0;

	unsigned long n1 = 1;
	unsigned long n2 = 2;
	unsigned long n3;

	printf("%lu, ", n1);
	printf("%lu, ", n2);
	for (count = 2 ; count < 98 ; count++)
	{
		n3 = n1 + n2;
		printf("%lu", n3);
		n1 = n2;
		n2 = n3;
		if (count != 97)
			printf(", ");
	}

	printf("\n");
	return (0);
}
