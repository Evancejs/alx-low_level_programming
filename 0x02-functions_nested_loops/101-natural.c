#include <stdio.h>
#include "main.h"
/*
 * print_multiples - Computes and prints the sum of multiples of 3 or 5 below 1024.
 * @sum: holds the sum of all multiples of 3 or 5 below 1024
 * @i: is 0;
 *
 * return 0
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
