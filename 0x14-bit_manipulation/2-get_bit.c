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
	if (index >= sizeof(n) * 8
			return (-1);

			int bit = (n >> index) & 1;

			return (bit);
}
