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
	char *program_name = argv[0];

	(void)argc;

	while (*program_name)
	{
		_putchar(*program_name);
		program_name++;
	}

	_putchar('\n');

	return (0);
}

/**
 * _putchar - Writes a character to stdout
 * @c: The character to write
 *
 * Return: On success, the number of characters written.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (putchar(c));
}
