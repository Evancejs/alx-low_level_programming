#include		 <stdio.h>
#include "main.h"
/**
 * print_times_table - prints the n times table starting from 0 to n*n
 * @n: the integer entered by user
 */
void print_times_table(int n)
{
	int i = 0;
	int j = 0;

	if (n < 0 || n > 15)
	{
	return;
	}

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
		int result = i * j;
			if (j == 0)
			{
			printf("%d", result);
			}
			else
			{
			printf(", %3d", result);
			}
		}
	printf("\n");
	}
}
