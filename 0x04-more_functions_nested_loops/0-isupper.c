#include "main.h"
/**
* _isupper - checks for uppercase character
* @c: takes the value for testing
*
* Return: 1 if uppercase else 0
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
