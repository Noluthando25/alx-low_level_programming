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

	for (num = 48; num < 58; num++)
	{
		if (num != 58)
			putchar(num);
		{
			putchar(',');
			putchar(' ');
		}
		putchar('\n');
	}
	return (0);
}
