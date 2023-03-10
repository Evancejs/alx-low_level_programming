#include <stdio.h>
#include "main.h"
/**
 * main - Entry point of the program
 * @argc: The number of arguments passed
 * to the program
 * @argv: An array of strings containing
 * the arguments passed to the program
 *
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char *argv[])
{
	int num1, num2, result, i;

	if (argc != 3)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = num1 * num2;

	/* Print the result */
	i = 1;
	if (result < 0)
	{
		_putchar('-');
		result = -result;
	}
	while (result / i > 9)
		i *= 10;
	while (i != 0)
	{
		_putchar((result / i) % 10 + '0');
		i /= 10;
	}
	_putchar('\n');

	return (0);
}
