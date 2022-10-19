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

	printf("%ld, %ld, ", a, b);
	do {
		printf("%ld", c);
		count++;
		a = b;
		b = c;
		c = a + b;
		if (count < 50)
		{
			printf(", ");
		}
	} while (count < 50);

	printf("\n");

	return (0);
}
