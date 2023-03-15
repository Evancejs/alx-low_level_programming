#include <stdlib.h>
#include "main.h"
/**
 * argstostr - Concatenates all the arguments of the program
 * @ac: Number of arguments
 * @av: Arguments vector
 *
 * Return: Pointer to new string
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0;
	int len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}

	str = malloc(sizeof(char) * (len + 1));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			str[k++] = av[i][j];

		str[k++] = '\n';
	}

	str[k] = '\0';
	return (str);
}
