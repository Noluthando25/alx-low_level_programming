#include "main.h"

int actual_sqrt_recursion(int n, int a);

/**
 * _sqrt_recursion -  the natural square root of a number.
 * @n: number to calculate
 * Return: result square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recourses to find natural
 * @n: number to calculate
 * @a: iterator
 * Return: square root
 */

 actual_sqrt_recursion(int n, int a)
{
	if (a * a > n)
		return (-1);
	if (a * a == n)
		return (a);
	return (actual_sqrt_recursion(n, a + 1));
}
