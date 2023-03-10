#include <stdio.h>
#include <stddef.h>
#include "main.h"

/**
 * main - Adds positive numbers
 * @argc: The number of arguments
 * passed to the program
 * @argv: An array of pointers to the arguments
 *
 * Return: 0 if successful, 1 if any
 * argument contains symbols that are not digits
 */
int main(int argc, char *argv[])
{
	int sum = 0, digit, i, j;

	if (argc == 1)
	{
		_putchar('0');
		_putchar('\n');
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				_putchar('E');
				_putchar('r');
				_putchar('r');
				_putchar('o');
				_putchar('r');
				_putchar('\n');
				return (1);
			}
			j++;
		}

		digit = 0;
		while (*argv[i])
			digit = digit * 10 + (*argv[i]++ - '0');

		sum += digit;
	}
	if (sum == 0)
		_putchar('0');
	else
	{
		if (sum < 0)
		{
			_putchar('-');
			sum = -sum;
		}
		print_number(sum);
	}
	_putchar('\n');
	return (0);
}

/**
 * print_number - Prints an integer
 * @n: The integer to print
 */
void print_number(int n)
{
	if (n / 10)
		print_number(n / 10);

	_putchar((n % 10) + '0');
}
