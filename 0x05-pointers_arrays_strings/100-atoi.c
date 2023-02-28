#include "main.h"

/**
 * _atoi - Convert a string to an integer
 * @s: Pointer to string to convert
 *
 * Return: The converted integer value
 */

int _atoi(char *s)
{
	int i = 0, sign = 1, res = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
			res = res * 10 + s[i] - '0';
		else if (s[i] == '+')
			sign *= 1;
		else if (res > 0)
			break;
		i++;
	}

	return (sign * res);
}
