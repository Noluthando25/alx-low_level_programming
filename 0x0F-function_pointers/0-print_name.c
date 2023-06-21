#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: name
 * @f: pointer
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
	printf("My name is: ");
	f(name);
	printf("\n");
}
