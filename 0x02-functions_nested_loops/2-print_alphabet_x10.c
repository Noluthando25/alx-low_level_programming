#include "main.h"

/**
 * print ten times alphabet - in lowercase
 *
 */

void print_alphabet_x10(void)
{
	char la;
	int ten;

	for (la = 'a'; la <= 'z'; la++)
		_putchar(la);
	la++;

	for (ten = 0; ten <= 9; ten++)

		_putchar('\n');
}
