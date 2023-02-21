#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 * description - print alphabets in ascending order
 */
void print_alphabet(void);

int main(void)
{
	print_alphabet();

	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);

	putchar('\n');

	return (0);
}
