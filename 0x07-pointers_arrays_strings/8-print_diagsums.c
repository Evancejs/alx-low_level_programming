#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 *                 of a square matrix of integers
 * @a: the square matrix of integers
 * @size: the size of the matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i = 0, j = 0;
	int sum1 = 0, sum2 = 0;

	while (i < size)
	{
		sum1 += *(a + i * size + i);
		sum2 += *(a + i * size + (size - 1 - i));
		i++;
	}

	_putchar(sum1 / 10 + '0');
	_putchar(sum1 % 10 + '0');
	_putchar(',');
	_putchar(' ');

	_putchar(sum2 / 10 + '0');
	_putchar(sum2 % 10 + '0');
	_putchar('\n');
}
