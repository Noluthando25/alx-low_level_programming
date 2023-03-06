#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the square matrix of integers
 * @a: matrix of integers
 * @size: size of matrix
 */

void print_diagsums(int *a, int size)
{
	int n;
	int sum = 0;
	int num = 0;

	for (n = 0; n < size; n++)
	{
		sum += a[n];
		a += size;
	}
	a -= size;

	for (n = 0; n < size; n++)
	{
		num += a[n];
		a -= size;
	}
	printf("%d, %d\n", sum, num);
}
