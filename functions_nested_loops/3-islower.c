#include "main.h"
/**
 *_islower- checks for lowercase
 *@c: character to be checked.
 * Return: 1 for lower case or 0 for else
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
