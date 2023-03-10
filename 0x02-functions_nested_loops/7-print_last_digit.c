#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: the number
 * Return: the value of the last digit
 *
 */

int print_last_digit(int n)
{
	int num = n % 10;

	if (num < 0)
		_putchar(num *= -1);

	_putchar(num + '0');

	return (n % 10);

}

