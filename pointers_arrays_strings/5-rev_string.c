#include "main.h"
#include <stdio.h>
/**
 *rev_string- reverses a string.
 *@s: string to be modified
 *Return: void
 */
void rev_string(char *s)
{
	int len = 0, in = 0;
	char tmp;

	while (s[in++])
	len++;

	for (in = len - 1; in >= len / 2; in--)
	{
	tmp = s[in];
	s[in] = s[len - in - 1];
	s[len - in - 1] = tmp;
	}
}
