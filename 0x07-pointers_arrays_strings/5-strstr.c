#include "main.h"
/**
 * _strstr - finds the first occurrence of th
 * e substring needle in the string haystack
 * @haystack: the string to search
 * @needle: the substring to search for
 *
 * Return: pointer to the beginning of th
 * e located substring, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (*needle == '\0')
		return (haystack);

	while (*haystack != '\0')
	{
		i = 0;
		j = 0;
		while (haystack[i] == needle[j] && needle[j] != '\0')
		{
			i++;
			j++;
		}
		if (needle[j] == '\0')
			return (haystack);
		haystack++;
	}

	return (NULL);
}
