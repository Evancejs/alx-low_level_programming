#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Returns a pointer to a newly
 * allocated space in memory,
 * which contains a copy of the string
 * given as a parameter.
 *
 * @str: The string to duplicate.
 *
 * Return: On success, returns a pointer to the
 * duplicated string.On failure, returns NULL.
 */
char *_strdup(char *str)
{
	unsigned int len = 0;
	char *new_str;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len] != '\0')
	{
		len++;
	}

	new_str = (char *) malloc(sizeof(char) * (len + 1));

	if (new_str == NULL)
	{
		return (NULL);
	}

	for (unsigned int i = 0; i <= len; i++)
	{
		new_str[i] = str[i];
	}

	return (new_str);
}
