#include <string.h>
#include "main.h"
/**
 * wildcmp - compares two strings and allows
 * for the use of the * wildcard character
 * @s1: pointer to the first input string
 * @s2: pointer to the second input string,
 * which may contain the * wildcard character
 *
 * Return: 1 if the strings can be considered identical,
 * otherwise return 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && (*s2 == '\0' || *s2 == '*'))
	{
		return (1);
	}

	if (*s1 == *s2 || *s2 == '*')
	{
		if (*s2 == '*')
		{
			return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
		}
		else
		{
			return (wildcmp(s1 + 1, s2 + 1));
		}
	}

	return (0);
}
