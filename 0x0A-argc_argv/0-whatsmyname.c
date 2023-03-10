#include <stdio.h>
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
int main(int argc __attribute__((unused)), char *argv[])
{
	char *program_name = argv[0];

	while (*program_name)
	{
		_putchar(*program_name);
		program_name++;
	}

	_putchar('\n');

	return (0);
}
