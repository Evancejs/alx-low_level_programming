#include "main.h"
#include <math.h>
/**
* is_prime_number -  returns 1 if n is a prime number else 0
* @n: input integer
*
*Return: 1 if n is a prime number else 0 
*/
int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
	{
	return (0);
	}

	while (i <= sqrt(n))
	{
		if (n % i == 0)
		{
		return (0);
		}
		i++;
	}

	return (1);
}
