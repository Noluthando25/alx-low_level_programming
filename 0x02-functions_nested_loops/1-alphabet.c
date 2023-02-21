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
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
	 _putchar(letter);
}
_putchar('\n');
return (0);
}
