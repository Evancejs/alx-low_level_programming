#include "main.h"
/**
* main - prints alphabet a-z
*
* Return: 0
*
*/
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
	_putchar(letter);
	letter++;
	}
	_putchar('\n');
}
