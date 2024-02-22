#include "main.h"
/**
 *print_alphabet_x10 - it prints the alphabet
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char c;
	int m = 0;

	while (m <= 9)
	{
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
		_putchar('\n');
		m++;
	}
}
