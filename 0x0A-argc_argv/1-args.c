#include <stdio.h>
#include "main.h"
/**
 * main - Entry point of the program
 * @argc: The number of arguments
 * passed to the program
 * @argv: An array of strings containing
 * the arguments passed to the program
 *
 * Return: 0 on success, non-zero on failure
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
