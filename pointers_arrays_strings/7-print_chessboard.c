#include "main.h"
/**
 * print_chessboard- print the chessboard
 * @a: array of pieces
 *
 *Return: Nothing.
 */
void print_chessboard(char (*a)[8])
{
	int h, d;

	for (h = 0; h < 8; h++)
	{
		for (d = 0; d < 8; d++)
		{
			_putchar(a[h][d]);
		}

		_putchar('\n');
	}
}
