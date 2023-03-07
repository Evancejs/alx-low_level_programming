#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * set_string - sets the value of a pointer to a char.
 * @s: pointer to a pointer to a char.
 * @to: pointer to a char.
 *
 * Return: void.
 */
void set_string(char **s, char *to)
{
	size_t len = strlen(to);
	char *new_str = malloc(len + 1);
	if (new_str == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(1);
	}
	strcpy(new_str, to);
	free(*s);  // Free the old string
	*s = new_str;
}
