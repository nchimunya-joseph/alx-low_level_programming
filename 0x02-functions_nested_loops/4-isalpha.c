#include "main.h"

/**
 * _isalpha - Returns i if a letter is in lowercase
 * @c: number to check
 * Return: 0 or 1
 */

int _isalpha(int c)
{
	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
		return (1);
	else
		return (0);

}
