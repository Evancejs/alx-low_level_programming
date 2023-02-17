#include <stdio.h>
/**
* main - prints all combinations of 0-9
*
* Return: 0
*/
int main(void)
{
	int i = 0;

	while (i < 10)
	{
	putchar(i + '0');
	putchar(',');
	putchar(' ');
	i++;
	}
	putchar(i + '0');
	return (0);
}
