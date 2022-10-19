#include <stdio.h>

/**
 * main - fibonacci
 *
 * Return: 0 if program rins successfully.
*/

int main(void)
{
	int count = 2;
	long int a = 1;
	long int b = a + 1;
	long int c = a + b;

	do {
		if (c % 2 == 0)
			count += c;
		a = b;
		b = c;
		c = a + b;
	} while (count < 4000000);

	printf("%d\n", count);

	return (0);
}
