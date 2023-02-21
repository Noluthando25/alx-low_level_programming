#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 * description - print alphabets in ascending order
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);

	putchar('\n');

	print_alphabet();
	return (0);
}
