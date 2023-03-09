#include <string.h>
#include "main.h"
/**
 * is_palindrome_recursive - helper function for is_palindrome
 * @s: pointer to the input string
 * @start: start index of the substring to check
 * @end: end index of the substring to check
 *
 * Return: 1 if the substring between start and end is a palindrome
 * , 0 otherwise
 */
int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}

	if (s[start] == s[end])
	{
		return (is_palindrome_recursive(s, start + 1, end - 1));
	}

	return (0);
}

/**
* is_palindrome - checks if a string is a palindrome
* @s: pointer to the input string
*
* Return: 1 if the input string is a palindrome, 0 otherwise
*/
int is_palindrome(char *s)
{
	int n = strlen(s);

	return (is_palindrome_recursive(s, 0, n - 1));
}
