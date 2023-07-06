#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint -  converts a binary number to an unsigned int
 * @b: poinyter to string
 * Return: 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int i;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
			decimal = decimal * 2;
		else if (b[i] == '1')
			decimal = decimal * 2 + 1;
		else
			return (0);
	}
	return (decimal);
}
