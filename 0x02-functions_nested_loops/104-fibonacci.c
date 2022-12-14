#include <stdio.h>

/**
 * main - finds and prints the first 98 Fiboncci numbers,
 * starting with 1 and 2
 * follwed by the new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long int i, j, j1, j2, k1, k2;

	j = 1;
	k2 = 2;

	printf("%lu", j);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", k2);
		k2 = k2 + j;
		j = k2 - j;
	}

	j1 = j / 1000000000;
	j2 = j % 1000000000;
	k1 = k2 / 1000000000;
	k2 = k2 % 1000000000;

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", k1 + (k2 / 1000000000));
		printf("%lu", k2 % 1000000000);
		k1 = k1 + j1;
		j1 = k1 - j1;
		k2 = k2 + j2;
		j2 = k2 - j2;
	}

	printf("\n");

	return (0);
}
