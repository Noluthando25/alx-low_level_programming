#include "main.h"

/**
 * print_numbers - prints numbers
 * Return: print 0 to 9
 *@c: character to be used
 */

void print_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		_putchar((c % 10) + '0');
	}
	_putchar('\n');
}
