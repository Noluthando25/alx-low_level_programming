#include <stdio.h>
#include <stdlib.h>
/**
 * main -Entry point
 * Return: 0
 *
 */
int main(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		putchar("value %d char %c\n", c, c);
		c = c + 1;
	}
	return (0);
}
