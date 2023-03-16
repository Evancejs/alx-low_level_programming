#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 * multiply - multiply two positive numbers
 * @num1: first number to multiply
 * @num2: second number to multiply
 * Return: result of the multiplication
 */
int multiply(const char *num1, const char *num2)
{
	int len1 = 0, len2 = 0, i, j, k, carry = 0, sum;
	int *result;

	while (num1[len1])
		len1++;
	while (num2[len2])
		len2++;

	result = calloc(len1 + len2, sizeof(int));
	if (!result)
		return (-1);

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			sum = carry + (num1[i] - '0') * (num2[j] - '0') + result[i + j + 1];
			result[i + j + 1] = sum % 10;
			carry = sum / 10;
		}
		result[i + j + 1] = carry;
	}

	i = 0;
	while (i < len1 + len2 && result[i] == 0)
		i++;

	if (i == len1 + len2)
	{
		_putchar('0');
		free(result);
		return (0);
	}

	for (j = i; j < len1 + len2; j++)
		_putchar(result[j] + '0');

	free(result);
	return (0);
}

/**
 * main - program entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char **argv)
{
	int i;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	for (i = 1; i < argc; i++)
	{
		int j = 0;

		while (argv[i][j])
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (98);
			}
			j++;
		}
	}

	multiply(argv[1], argv[2]);
	_putchar('\n');

	return (0);
}
