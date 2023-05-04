#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
#include "function_pointers.h"

/**
 * main - print results
 * @argc: number of arguments
 * @argv: array of pointers
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int arg1, arg2, result;
	int (*func)(int, int);
	char op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);
	func = get_op_func(argv[2]);
	if (!func)
	{
		printf("Error\n");
		exit(99);
	}
	op = *argv[2];
	if ((op == '/' || op == '%') && arg2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = func(arg1, arg2);
	printf("%d\n", result);
	return (0);
}
