#include "main.h"
/**
* _memcpy -  fills memory with a constant byte
* @dest: gets input
* @src: constant bytes value
* @n:  bytes of the memory area pointed to s
*
*Return: dest
*/
char  *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
