#include <stdio.h>
/*
 * Computes and prints the sum of all multiples of 3 or 5 below 1024.
 * @sum: holds the sum of all multiples of 3 or 5 below 1024
 * @i: is 0;
 * @return the sum of all multiples of 3 or 5 below 1024.
 */
int main()
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
	return (sum);
}
