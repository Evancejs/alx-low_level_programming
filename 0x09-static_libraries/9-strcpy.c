#include "main.h"
/**
 * _strcpy - copies the string pointed to by src,
 * including the null byte,
 * to the buffer pointed to by dest.
 * @dest: pointer to the destination buffer.
 * @src: pointer to the source string.
 *
 * Return: the pointer to dest.
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i))
	{
	*(dest + i) = *(src + i);
	i++;
	}

	*(dest + i) = *(src + i);

	return (dest);
}
