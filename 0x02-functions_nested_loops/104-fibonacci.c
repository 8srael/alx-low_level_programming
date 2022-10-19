#include <stdio.h>

/**
 * main - fibonacci
 *
 * Return: 0 if program rins successfully.
*/

int main(void)
{
	int count = 2;

	float a = 1;
	float b = a + 1;
	float c = a + b;

	printf("%.0f, ", a);
	printf("%.0f, ", b);
	do {
		count++;
		printf("%.0f", c);
		a = b;
		b = c;
		c = a + b;
		if (count < 98)
			printf(", ");
	} while (count < 98);

	printf("\n");
	return (0);
}
