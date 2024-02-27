#include "main.h"
/**
 *puts2- prints every other character of a string
 *@str: The string
 *Return: void
 */
void puts2(char *str)
{
	int c;
	int j = 0;

	while (str[j] != '\0')
	{
	j++;
	}

	for (c = 0; c < j; c += 2)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
}
