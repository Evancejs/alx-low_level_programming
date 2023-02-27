#include "main.h"
/**
* _strlen - returns the length of a string
* @s: *s pointer to the variable s from input
*
* Return:length of the input string
*/

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
