#include "variadic_functions.h"
#include <stdarg.h>

/**
 *sum_them_all- return the sum
 *@n: number of parameter
 *@...: variable number
 *Return: n == 0, return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list a;
	unsigned int b, sum = 0;

	va_start(a, n);

	for (b = 0; b < n; b++)
	{
		sum += va_arg(a, int);
	}
	va_end(a);

	return (sum);
}
