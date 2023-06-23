#include <stdio.h>
#include <stdarg.h>
#include "variadic.functions.h"

/**
 * sum_them_all -  returns the sum of all its parameters.
 * @n: parameter
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(args, n);

	for (unsigned int i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
