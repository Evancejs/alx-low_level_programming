#include "main.h"
#include <limits.h>
/**
 * print_last_digit - prints the last digit of a number
 * @n: the integer to get the last digit of
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
		if (n == INT_MIN)
		{
		n = -(n + 1);
		last_digit = (n % 10) + 1;
		}
		else
		{
		n = -n;
		last_digit = (n % 10);
		}
	}
	else
	{
	last_digit = (n % 10);
	}

	_putchar('0' + last_digit);
	return (last_digit);
}
