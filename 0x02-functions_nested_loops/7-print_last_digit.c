#include "main.h"
#include <limits.h>

/**
 * print_last_digit - print the last digit of a number
 * @int: last digit of number
 * Return: the value of the last digit
 *
 */

int print_last_digit(int num)
{
	int num;

	num = (num % 10);
	_putchar('0' + num);

	_putchar('\n');

	return (0);

}

