#include <stdio.h>

/**
 * main - fibonacci
 *
 * Return: 0 if program runs successfully.
*/

int main(void)
{
	int count = 0;
	int overflow;

	unsigned long n1 = 1;
	unsigned long n2 = 1;
	unsigned long n3 = 0;

	long n1_head, n1_tail, n2_head, n2_tail, n3_head, n3_tail;

	printf("%lu", n1);

	for (count = 2 ; count < 93 ; count++)
	{
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
		printf(", %lu", n3);
	}

	n1_head = n1 / 1000000000;
	n2_tail = n2 % 1000000000;
	n1_head = n1 / 1000000000;
	n2_tail = n2 % 1000000000;

	for (count = 93 ; count < 99 ; count++)
	{
		overflow = (n1_tail + n2_tail) / 1000000000;
		n3_head = (n1_head + n2_head) + overflow;
		n3_tail = (n1_tail + n2_tail) - (1000000000 * overflow);

		printf(", %lu%lu", n3_head, n3_tail);

		n1_head = n2_head;
		n1_tail = n2_tail;
		n2_head = n3_head;
		n2_tail = n3_tail;
	}

	printf("\n");
	return (0);
}
