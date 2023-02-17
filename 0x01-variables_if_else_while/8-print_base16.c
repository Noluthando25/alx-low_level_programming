#include <stdio.H>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: 0
 *
 */
int main(void)
{
	int num;
	{
		for (num = 16; num < 0; num++)
			putchar((num % 16) + '0');

		putchar('\n');
	}
	return (0);
}
