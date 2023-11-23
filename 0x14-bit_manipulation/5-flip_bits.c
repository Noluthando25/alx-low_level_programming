#include "main.h"

/**
 * flip_bits - the number of bits you would need to flip
 * @n : first number
 * @m : second number
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, a = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			a++;
	}
	return (a);
}
