#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: 0
 *
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		if (n != 59)
		putchar(n);
	}

	putchar('\n');

	return (0);
}

