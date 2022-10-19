#include <stdio.h>

/**
 * main - fibonacci
 *
 * Return: 0 if program runs successfully.
*/

int main(void)
{
	int count = 0;

	float n1 = 1;
	float n2 = 2;
	float n3;

	printf("%.0f, ", n1);
	printf("%.0f, ", n2);
	for (count = 2 ; count < 99 ; count++)
	{
		n3 = n1 + n2;
		printf("%.0f", n3);
		n1 = n2;
		n2 = n3;
		if (count != 98)
			printf(", ");
	}

	printf("\n");
	return (0);
}
