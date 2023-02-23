#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of 612852475143
 *
 * Return: 0
 */
int main(void)
{
	long int num = 612852475143;
	long int i;

	while (num % 2 == 0)
	{
		num /= 2;
	}

	for (i = 3; i <= sqrt(num); i += 2)
	{
		while (num % i == 0)
		{
			num /= i;
		}
	}

	if (num > 2)
	{
		printf("%ld\n", num);
	}

	return (0);
}
