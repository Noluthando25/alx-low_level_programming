#include <stdio.h>
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
		for (num = 16; num < 9; num++)
			putchar((num % 16) + '0');

		putchar('\n');
	}
	return (0);
}
