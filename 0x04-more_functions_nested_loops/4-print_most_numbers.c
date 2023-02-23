#include "main.h"

/**
 * print_most_numbers - print numbers from 0 to 9
 * Return: numbers 0 to 9,not 2 and 4
 *
 */

void print_most_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		if (c != 2 && c != 4)
			putchar(c);
	}
	putchar('\n');
	return (0);
}
