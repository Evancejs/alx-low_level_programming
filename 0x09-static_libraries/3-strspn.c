#include "main.h"
/**
 * _strspn - calculates the length of
 * the initial segment of `s`
 * which consists entirely of bytes from `accept`.
 * @s: pointer to the string to be checked
 * @accept: pointer to the string containing
 * the bytes to be checked
 *
 * Return: number of bytes in the initial
 * segment of `s`
 * which consist only of bytes from `accept`.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count = 0;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
			break;
		i++;
	}
	return (count);
}
