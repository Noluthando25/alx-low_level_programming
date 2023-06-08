#include "main.h"

 actual_prime(int n, int a);

/**
 * is_prime_number - integer is a prime number or not
 * @n: number to evaluate
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calutes if an integer is prime recursively
 * @n: number to evaluate
 * @a: iterator
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */

int actual_prime(int n, int a)
{
	if (a == 1)
		return (1);
	if (n % a == 0 && a > 0)
		return (0);
	return (actual_prime(n, a - 1));
}
