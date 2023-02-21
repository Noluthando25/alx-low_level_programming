#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 *
 */

void print_alphabet(void);

int main(void)
{
	print_alphabet();
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
	 putchar(letter);
}
putchar('\n');
return (0);
}
