#include "main.h"
/**
* _isdigit - checks if input is 0-9
* @c: inputs the value
*
* Return: 1 if true else
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
