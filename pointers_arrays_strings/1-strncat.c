#include "main.h"
#include <stdio.h>
/**
 *_strncat- concatenates two strings using at most
 *@src: The string to be appended to dest.
 *@dest: The string to be appended upon.
 *@n: The number of bytes from src to be appended to dest.
 *Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int in = 0, dest_len = 0;

	while (dest[in++])
	dest_len++;
	for (in = 0; src[in] && in < n; in++)
	dest[dest_len++] = src[in];
	return (dest);
}
