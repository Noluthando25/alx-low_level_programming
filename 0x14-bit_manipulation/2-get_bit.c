#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * get_bit -  returns the value of a bit at a given index.
 * @index: index
 * @n: integer
 * Return: 0
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
			return (-1);

	unsigned long int mask = 1UL << index;

	else
		return ((n & mask) != 0);
}

int main(void)
{
	int n;

	n = get_bit(1024, 10);
	printf("%d\n", n);
	n = get_bit(98, 1);
	printf("%d\n", n);

	return (0);
}
