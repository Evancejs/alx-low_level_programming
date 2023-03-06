#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: the 2D array representing the chessboard
 */
void print_chessboard(char (*a)[8])
{
	int row = 0, col;

	while (row < 8)
	{
		col = 0;
		while (col < 8)
		{
			_putchar(a[row][col]);
			col++;
		}
		_putchar('\n');
		row++;
	}
}
