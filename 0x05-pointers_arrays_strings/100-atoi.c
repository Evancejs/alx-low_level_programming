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
	int i = 0, sign = 1, r = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			if (r > INT_MAX / 10 || (r == INT_MAX / 10 && (s[i] - '0') > INT_MAX % 10))
			{
				return (sign == 1 ? INT_MAX : INT_MIN);
			}

			r = r * 10 + s[i] - '0';
		}
		else if (s[i] == '+')
			sign *= 1;
		else if (r > 0)
			break;
		i++;
	}

	return (sign * r);
}
