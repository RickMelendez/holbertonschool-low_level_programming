#include "main.h"
#include <stdio.h>
/**
 *_strcat- concatenates two strings.
 *@src: source of the string
 *@dest: The destination of the string
 *Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int dlen = 0, i;

	while (dest[dlen])
	{
		dlen++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}

	dest[dlen] = '\0';
	return (dest);
}
