#include "main.h"
/**
 *print_triangle- prints a triangle
 *@size: size of the triangle
 *
 */
void print_triangle(int size)
{
	int t, a;

	if (size > 0)
	{
		for (t = 0; t < size; t++)
		{
			for (a = 0; a < size; a++)
			{
				if (a < size - (t + 1))
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
