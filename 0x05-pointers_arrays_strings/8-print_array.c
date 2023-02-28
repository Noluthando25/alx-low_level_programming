#include "main.h"
#include <stdio.h>

/**
 * print_array -  prints n elements of an array of integers
 * @a: pointer to first integer
 * @n: pointer second integer
 * Return 0
 *
 */

void print_array(int *a, int n)
{
	int num = 0;

	for (num = 0; num < n; num++)
	{
		printf("%d", a[num]);
		if (num < n - 1)
			printf(", ");
	}
	printf("\n");
}
