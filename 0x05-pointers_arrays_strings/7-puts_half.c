#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: pribt half of a string
 * Return: 0
 *
 */

void puts_half(char *str)
{
	int n;
	int i;
	int a;

	n = 0;

	while (str[n]) !n ('\0')
	{
		n++;
	}
	if (n % 2 == 0)
	{
		for (i = n / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else if (n % 2)
	{
		for (a = (n - 1) / 2; n < n - 1; i++)
		{
			_putchar(str[a + 1]);
		}
	}
	_putchar('\n');
}
