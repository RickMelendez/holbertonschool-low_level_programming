#include "main.h"
#include <stdio.h>
/**
 *print_diagsums- sum of two diagonal
 *@a: first
 *@size: size
 */
void print_diagsums(int *a, int size)
{
	int c, x, sum1 = 0, sum2 = 0;

	for (c = 0; c <= (size * size); c  = c + size + 1)
		sum1 = sum1 + a[c];

	for (x = size - 1; x <= (size * size) - size; x = x + size - 1)
		sum2 = sum2 + a[x];
	printf("%d, %d\n", sum1, sum2);
}
