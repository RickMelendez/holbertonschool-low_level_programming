#include "main.h"
/**
 *_strlen- string lenght
 *@s: string
 * Return: s
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
	{
	len++;
	}
	return (len);
}
