#include "main.h"
/**
 *_isalpha- checks for lowercase
 *@c: character to be checked.
 * Return: 1 for lower case or 0 for else
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
