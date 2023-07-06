#include <stdio.h>
#include "main.h"

/**
 * flip_bits - number of bits you would need to flip
 * @n: first number
 * @m: second number
 * Return: 0
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int xor_result = n ^ m;

	while (xor_result > 0)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}
	return (count);
}

/**
 * main - number of bits
 * Return: 0
 */

int main(void)
{
	unsigned int n;

	n = flip_bits(1024, 1);
	printf("%u\n", n);
	n = flip_bits(402, 98);
	printf("%u\n", n);

	return (0);
}
