#include "main.h"
/**
* print_alphabet - prints alphabet a-z
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
