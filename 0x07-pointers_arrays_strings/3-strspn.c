#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string to search
 * @accept: characters to search for in s
 *
 * Return: number of bytes in the initial segment of
 * s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{

	unsigned int i, j, count = 0;
	int found;

	i = 0;

	while (s[i] != '\0')
	{
	found = 0;
	j = 0;
	while (accept[j] != '\0')
	{
		if (s[i] == accept[j])
		{
		count++;
		found = 1;
		break;
		}
	j++;
	}
	if (!found)
		break;
	i++;
	}

	return (count);
}
