#include "main.h"
#include <stdlib.h>
/**
 *malloc_checked- allocates
 *@b: size
 *Return: termination 98 if NULL || p
 */
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);

	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}
