#include "main.h"
/**
* _memset -  fills memory with a constant byte
* @s: gets input
* @b: constant bytes value
* @n:  bytes of the memory area pointed to s
*
*Return: s
*/

char* _memset(char* s, char b, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
