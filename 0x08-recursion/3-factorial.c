#include "main.h"

/**
 * factorial -  returns the factorial of a given number
 * @n: number to find factorial of
 * Return: factorial of a given number
 */

int factorial(int n)
{

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);
	return (0);
}
