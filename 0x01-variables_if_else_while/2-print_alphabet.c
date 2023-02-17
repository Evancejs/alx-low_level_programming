#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
* main - prints the alphabet, followed by a new line
*
* Return: 0
*/
int main(void)
{
	int letter = 'a';

	while (letter <= 'z')
	{
	putchar(letter);
	letter++;
	}
	putchar('\n');
	return (0);
}
