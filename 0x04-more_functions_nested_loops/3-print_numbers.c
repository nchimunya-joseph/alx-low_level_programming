#include "main.c"

/**
 * print_numbers - prints numbers (0 through 9)
 * follwed by a new line
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
		_putchar(i + '0');
	_putchar('\n');
}
