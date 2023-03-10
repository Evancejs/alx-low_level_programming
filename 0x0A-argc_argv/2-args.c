#include <stdio.h>
#include <stddef.h>
#include "main.h"
/**
 * main - Entry point of the program
 * @argc: The number of arguments passed
 * to the program
 * @argv: An array of strings containing
 * the arguments passed to the program
 *
 * Return: 0 on success, non-zero on failure
 */
int main(int argc, char *argv[])
{
	int i = 0;
	int j;

	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			_putchar(argv[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}

	return (EXIT_SUCCESS);
}
