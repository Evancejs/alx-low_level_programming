#include "main.h"
/**
* print_triangle - prints triangles of n size
* @size: inputs size of the triangle
*/

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (int row = 1; row <= size; row++)
	{
		for (int col = 1; col <= row; col++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
