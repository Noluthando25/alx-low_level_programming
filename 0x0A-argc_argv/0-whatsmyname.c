#include "main.h"
#include <stdio.h>

/**
 * main - prints its name, followed by a new line
 * @argv: second argument
 * @argc: first argument
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv[0]);
	return (0);
}
