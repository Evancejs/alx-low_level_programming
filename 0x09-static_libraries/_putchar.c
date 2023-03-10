#include <unistd.h>
#include "main.h"
/**
 * _putchar - takes a single character as an argument and
 *writes it to the standard output using
 *the write system call
 * @c: character input
 *
 * Return: the number of bytes written
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
