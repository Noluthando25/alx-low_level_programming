#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: 0
 *
 */
int main(void)
{
	int letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}
