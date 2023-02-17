#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
* main - prints the alphabet , skips q & e
*
* Return: 0
*/
int main(void)
{
	int letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'q' && letter != 'e')
		{
			putchar(letter);
		}
	letter++;
	}
	putchar('\n');
	return (0);
}
