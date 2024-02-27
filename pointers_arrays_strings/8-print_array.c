#include <stdio.h>
#include "main.h"
/**
 *print_array- an array
 *@a: int one
 *@n: int two
 */
void print_array(int *a, int n)
{
	int r;

	for (r = 0; r < n; r++)
	{
		printf("%d", a[r]);
		if (r != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
