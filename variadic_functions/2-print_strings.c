#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *print_strings- prints string
 *@separator: string
 *@n: number of strings
 *@...: variable
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strs;
	char *str;
	unsigned int in;

	va_start(strs, n);

	for (in = 0; in < n; in++)
	{
		str = va_arg(strs, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (in != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
		printf("\n");

		va_end(strs);
}
