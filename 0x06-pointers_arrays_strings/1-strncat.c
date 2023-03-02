#include "main.h"
/**
* _strncat - concatenates two strings
* @dest: gets input 1st string
* @n:  number of bytes from src
* @src: gets input 2nd string
*
*Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;
	int i = 0;

	while (*p != '\0')
	{
		p++;
	}
	while (*src != '\0' && i < n)
	{
		*p = *src;
		p++;
		src++;
		i++;
	}
	*p = '\0';
	return (dest);
}
