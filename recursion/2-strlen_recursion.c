#include "main.h"
/**
 *_strlen_recursion- calculate lenght
 *@s: string
 *Return: int value
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
