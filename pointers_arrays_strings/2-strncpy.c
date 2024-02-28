#include "main.h"
#include <stdio.h>
/**
 *_strncpy- function that copies a string.
 *@dest: The buffer storing the string copy.
 *@src:The source string.
 *@n: The maximun number of bytes to copie from src.
 *Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int in = 0, s_l = 0;

	while (src[in++])
	s_l++;

	for (in = 0; src[in] && in < n; in++)
	dest[in] = src[in];
	for (in = s_l; in < n; in++)
	dest[in] = '\0';

	return (dest);
}
