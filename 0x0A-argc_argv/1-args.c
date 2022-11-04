#include <stdio.h>

/**
 * main - Program prints number of arguments passed to it.
 * @argc: number of arguments supplied to the program.
 * @argv: An array of pointer to the arguments.
 * Return: Always 0
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
