#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
* main - prints number 0-9
*
* Return: 0
*/
int main(void)
{
	int num = 0;

	while (num < 10)
	{
	putchar('0' + num);
	num++;
	}
	putchar('\n');
	return (0);
}
