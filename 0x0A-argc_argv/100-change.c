#include <stdio.h>
#include <stddef.h>
#include "main.h"
/**
 * count_coins - Counts the minimum number
 * of coins needed to make change
 * @cents: The amount of money in cents
 *
 * Return: The minimum number of coins needed to make change
 */
int count_coins(int cents)
{
	int coins = 0;

	if (cents < 0)
		return (0);

	while (cents > 0)
	{
		if (cents >= 25)
		{
			cents -= 25;
			coins++;
		}
		else if (cents >= 10)
		{
			cents -= 10;
			coins++;
		}
		else if (cents >= 5)
		{
			cents -= 5;
			coins++;
		}
		else if (cents >= 2)
		{
			cents -= 2;
			coins++;
		}
		else
		{
			cents -= 1;
			coins++;
		}
	}

	return (coins);
}

/**
 * main - Prints the minimum number of coins
 * needed to make change
 * @argc: The number of arguments passed to the program
 * @argv: An array of pointers to the arguments
 *
 * Return: 0 if successful, 1 if any argument is invalid
 */
int main(int argc, char *argv[])
{
	int cents, coins;

	if (argc != 2)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return (1);
	}

	cents = atoi(argv[1]);

	coins = count_coins(cents);

	print_number(coins);
	_putchar('\n');

	return (0);
}
