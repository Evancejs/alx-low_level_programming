#include "main.h"
/**
 * times_table - prints the 9 times table starting from 0
 */
void times_table(void)
{
	int i = 0, j, r;

	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			r = i * j;
			if (j == 0)
				_putchar('0' + r);
			else if (r <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + r);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (r / 10));
				_putchar('0' + (r % 10));
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
