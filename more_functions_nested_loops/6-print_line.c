#include "main.h"
/**
 *print_line- prints a line
 *@n: numbers of times
 */
void print_line(int n)
{
	int k;
		for (k = 0; k < n; k++)
		{
			if (n > 0)
			{
				_putchar('_');
			}
			_putchar('\n');
		}
}
