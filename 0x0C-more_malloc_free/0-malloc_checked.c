#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - allocates memory using malloc.
 * @b: unsigned int to allocate memory for
 *
 * Return: pointer to allocated memory
 * On error, causes normal process
 * termination with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
