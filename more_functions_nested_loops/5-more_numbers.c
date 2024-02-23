#include "main.h"
/**
 *more_numbers- prints 10 times the numbers
 *
 */
void more_numbers(void)
{
	int b, p;

		for (b = 0; b <= 9; b++)
		{
			for (p = 0; p <= 14; p++)
			{
				if (p >= 10)
				{
					_putchar((p / 10) + '0');
				}
				_putchar((p % 10) + '0');
			}
	_putchar('\n');
		}
}
