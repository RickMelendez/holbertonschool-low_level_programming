#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *print_all- prints
 *@format: list
 *...: variable
 */
void print_all(const char * const format, ...)
{
	int a = 0;
	char *str, *sepa = "";
	va_list l;

	va_start(l, format);

	if (format)
	{
		while (format[a])
		{
			switch (format[a])
			{
				case 'c':
					printf("%s%c", sepa, va_arg(l, int));
					break;
				case 'i':
					printf("%s%d", sepa, va_arg(l, int));
					break;
				case 'f':
					printf("%s%f", sepa, va_arg(l, double));
					break;
				case 's':
					str = va_arg(l, char *);
					if (!str)
					{
						str = "(nil)";
					}
					printf("%s%s", sepa, str);
					break;
				default:
					a++;
					continue;
			}
			sepa = ", ";
			a++;
		}
	}
	printf("\n");
	va_end(l);
}
