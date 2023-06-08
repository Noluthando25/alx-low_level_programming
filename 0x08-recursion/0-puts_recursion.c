#include "main.h"

/**
 * _puts_recursion - that prints a string
 * @s: input
 * Return: ALWAYS 0
 */

void _puts_recursion(char *s)
{
	 (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
