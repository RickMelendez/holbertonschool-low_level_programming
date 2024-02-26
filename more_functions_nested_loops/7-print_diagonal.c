#include "main.h"
/**
 *print_diagonal- it prints a line
 *@n: number of times
 *
 */
void print_diagonal(int n)
{
	int t, s;

	for (t = 0; t < n; t++)
	{
		if (n > 0)
		{
			for (s = 0; s < t; s++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
