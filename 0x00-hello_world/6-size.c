#include <stdio.h>

/**
  *main - Entry point
  *
  *Return: Always 0 (Success)
  */
int main(void)
{
	char a;
	int b;
	long c;
	long long d;
	float f;

	printf("Size of a char: %ld byte(s)\n", sizeof(a));
	printf("Size of an int: %ld bytes(s)\n", sizeof(b));
	printf("Size of a long int: %ld byte(s)\n", sizeof(c));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(d));
	printf("Size of a float: %ld byte(s)\n", sizeof(f));
	return (0);
}
