#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *print_numbers- prints numbers
 *@separator: string
 *@n: numbers of int
 *@...: variable
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int in;

	va_start(num, n);

	for (in = 0; in < n; in++)
	{
		printf("%d", va_arg(num, int));
		if (in != (n - 1) && separator != NULL)
	{
		printf("%s", separator);
	}
	}
	printf("\n");

	va_end(num);
}
