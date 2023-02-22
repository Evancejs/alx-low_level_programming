#include <stdio.h>
#include "main.h"
/*
 * print_multiples - prints the sum of multiples of 3 or 5 below 1024.
 * main - calls print_multiples function
 * @sum: holds the sum of all multiples of 3 or 5 below 1024
 * @i: is 0;
 *
 * return 0
 */

/**
 * main - calls print_multiples function
 */
int main(void)
{
	print_multiples();
	return (0);
}

/*
 * print_multiples - prints the sum of multiples of 3 or 5 below 1024.
 */
int print_multiples(void)
{
	int sum = 0;
	int i = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
		sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
