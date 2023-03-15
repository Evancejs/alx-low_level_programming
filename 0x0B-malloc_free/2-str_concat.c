#include <stdlib.h>
#include "main.h"
/**
 * str_len - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
unsigned int str_len(char *s)
{
	unsigned int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string to be concatenated.
 * @s2: The second string to be concatenated.
 *
 * Return: If concatenation is successful
 * - a pointer to the concatenated
 *         string. Otherwise - NULL.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len1, len2, i;
	char *concat_str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = str_len(s1);
	len2 = str_len(s2);

	concat_str = (char *) malloc(sizeof(char) * (len1 + len2 + 1));

	if (concat_str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		concat_str[i] = s1[i];
	}

	for (i = 0; i <= len2; i++)
	{
		concat_str[len1 + i] = s2[i];
	}

	return (concat_str);
}
