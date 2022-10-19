#include "main.h"

/**
 * print_sign - prints + if a number is postive, - if nagative and 0 if zero
 * @n: number to check
 * Return: 1 or 0 or -1
 */

int print_sign(int n)
{
	if (n >= 1)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n <= -1)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
