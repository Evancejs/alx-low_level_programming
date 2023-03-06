#include "main.h"
/**
* _strspn - locates a character in a string
* @s: string input
* @accept: character its memory to be located
*
*Return: a pointer (s) to the 1st occurrence of c in the string s
* or NULL if the character is not found
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int match_found = 1;

	while (*s && match_found)
	{
		match_found = 0;

		for (char *a = accept; *a; a++)
		{
			if (*s == *a)
			{
				count++;
				match_found = 1;
				break;
			}
		}
		s++;
	}
	return (count);
}
