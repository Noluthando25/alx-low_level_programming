#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 * description - print alphabets in ascending order
 */
void print_alphabet(void);
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return ();
}
