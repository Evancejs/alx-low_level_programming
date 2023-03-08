#include "main.h"
/**
* is_prime_number -  returns 1 if n is a prime number else 0
* @n: input integer
* @i: checks starts at 2
*Return: 1 if n is a prime number else 0
*/
int is_prime_number(int n, int i)
{
	i = 2;

	if (n <= 1)
	{
		return (0);
	}

	if (i * i > n)
	{
		return (1);
	}

	if (n % i == 0)
	{
		return (0);
	}

	return (is_prime_number(n, i + 1));
}
