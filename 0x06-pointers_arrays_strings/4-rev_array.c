#include "main.h"

/**
 * reverse_array - that reverses the content of an array of integers
 * @a: array of integers to be reversed
 * @n: number of elements of the array
 *
 */

void reverse_array(int *a, int n)
{
	int num;
	int index;

	for (index = n - 1; index >= n / 2; index--)
	{
		num = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = num;
	}
}
