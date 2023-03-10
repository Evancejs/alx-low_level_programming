#include <stdio.h>
#include <stddef.h>
#include "main.h"
/**
 * main - Entry point of the program
 * @argc: The number of arguments
 * passed to the program
 * @argv: An array of strings containing
 * the arguments passed to the program
 *
 * Return: 0 on success, non-zero on failure
 */
int main(int argc, char *argv[])
{
	int num_args = argc - 1;
	int digit, divisor = 1;

	while (num_args / divisor > 9)
		divisor *= 10;

	while (divisor >= 1)
	{
		digit = (num_args / divisor) % 10;
		_putchar(digit + '0');
		divisor /= 10;
	}

	_putchar('\n');

	return (EXIT_SUCCESS);
}
