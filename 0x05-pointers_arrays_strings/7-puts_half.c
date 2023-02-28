#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: ponter to the string to printi
 * Return: 0
 *
 */

void puts_half(char *str)
{
	int n;
	int i;
	int a;

	a = 0;

	while (str[a] != '\0')
	{
		a++;
	}
	if (a % 2 == 0)
	{
		for (i = a / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else if (a % 2)
	{
		for (n = (a - 1) / 2; n < a - 1; i++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}
