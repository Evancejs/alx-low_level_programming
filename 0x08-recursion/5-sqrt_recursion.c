#include "main.h"
/**
* _sqrt_recursion - returns square root of n
* @n: input integer
*
*Return: x (square root of n)
*/

int _sqrt_recursion(int n)
{
	int x;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}

	x = _sqrt_recursion(n / 4) * 2;

	if (x * x <= n && (x + 1) * (x + 1) > n)
	{
		return (x);
	}
	else
	{
		return (-1);
	}
}
