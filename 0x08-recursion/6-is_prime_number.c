#include "main.h"
/**
 * is_prime_helper - recursive helper function
 * that determines if a given number
 * is prime by checking if it is divisible by any number less than itself.
 *
 * @n: the number to check for primality
 * @i: the divisor to check against n
 *
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_helper(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}

	if (i == 1)
	{
		return (1);
	}

	if (n % i == 0)
	{
		return (0);
	}

	return (is_prime_helper(n, i - 1));
}


/**
 * is_prime_number - function that determines if a given number is prime
 *
 * @n: the number to check for primality
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	return (is_prime_helper(n, n - 1));
}
