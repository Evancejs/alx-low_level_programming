#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
* main - prints base 16 numbers
*
* Return: 0
*/
int main(void)
{
	int num = 0;

	while (num < 16)
	{
		if (num < 10)
		{
		putchar('0' + num);
		}
		else
		{
		putchar('a' + num - 10);
		}
	num++;
	}
	putchar('\n');
	return (0);
}
