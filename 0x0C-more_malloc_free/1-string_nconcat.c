#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * string_nconcat - concatenates two strings up to n bytes
 * @s1: the first string
 * @s2: the second string
 * @n: the maximum number of bytes to concatenate from s2
 *
 * Return: pointer to the concatenated string or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i;
	char *concat_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;

	while (s2[len2])
		len2++;

	if (n >= len2)
		n = len2;

	concat_str = malloc(sizeof(char) * (len1 + n + 1));

	if (concat_str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat_str[i] = s1[i];

	for (i = 0; i < n; i++)
		concat_str[len1 + i] = s2[i];

	concat_str[len1 + n] = '\0';

	return (concat_str);
}
