#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * count_words - Counts the number of words in a string.
 * @str: The string to be counted.
 *
 * Return: The number of words counted.
 */
int count_words(char *str)
{
	int words = 0, i, flag = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			if (flag == 0)
			{
				flag = 1;
				words++;
			}
		}
		else
			flag = 0;
	}

	return (words);
}

/**
 * find_word_length - Finds the length
 * of the first word in a string.
 * @str: The string to be searched.
 *
 * Return: The length of the first word.
 */
int find_word_length(char *str)
{
	int i, length = 0;

	for (i = 0; str[i] && str[i] != ' '; i++)
		length++;

	return (length);
}

/**
 * free_grid - Frees a 2 dimensional grid
 * previously created by alloc_grid.
 * @grid: The grid to be freed.
 * @height: The height of the grid.
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to be split.
 *
 * Return: If str == NULL, str == "",
 * or memory allocation fails - NULL.
 * Otherwise - a pointer to the array of words.
 */
char **strtow(char *str)
{
	char **strings;
	int i, j, k, len, words;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = count_words(str);
	if (words == 0)
		return (NULL);

	strings = malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
		return (NULL);

	for (i = 0, j = 0; i < words; i++)
	{
		len = find_word_length(str + j);

		strings[i] = malloc(sizeof(char) * (len + 1));
		if (strings[i] == NULL)
		{
			free_grid(strings, i);
			return (NULL);
		}

		for (k = 0; k < len; k++)
			strings[i][k] = str[j++];

		strings[i][k] = '\0';
		j++;
	}

	strings[i] = NULL;
	return (strings);
}
