#include "main.h"
#include <string.h>

/**
 * puts2 - check the code
 * @s: variable
 */

void print_rev(char *s)
{
	int i;
	int a;

	for (i = 0; s[i] != '\0'; i++)
		continue;

	i--;

	for (a = 0; a <= i; i--)
		_putchar(s[i]);

	_putchar('\n');
}
