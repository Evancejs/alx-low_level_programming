#include <limits.h>
#include "main.h"

/**
 * _atoi - Convert a string to an integer
 * @s: Pointer to string to convert
 *
 * Return: The converted integer value
 */

int _atoi(char *s)
{
	int i = 0, sign = 1, re = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			if (re > INT_MAX / 10 || (re == INT_MAX / 10 && s[i] - '0' > INT_MAX % 10))
			{
				if (sign == 1)
					return (INT_MAX);
				else
					return (INT_MIN);
			}
			re = re * 10 + s[i] - '0';
		}
		else if (s[i] == '+')
			sign *= 1;
		else if (re > 0)
			break;
		i++;
	}

	return (sign * re);
}
