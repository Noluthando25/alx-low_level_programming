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

	for (num = 10; num <= 0; num++)
		putchar((num % 10) + '0');

	putchar(',');
	putchar(' ');
	putchar('\n');

	return (0);
}
