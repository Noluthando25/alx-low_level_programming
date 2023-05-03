#include <stdio.h>
#include <stdlib.h>

/**
 * main - print own pocodes
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int bytes, n;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	arr = (char *)main;
	for (n = 0; n < bytes; n++)
	{
		if (n == bytes - 1)
		{
			printf("%.2hhx\n", arr[n]);
			break;
		}
		printf("%.2hhx", arr[n]);
	}
	return (0);
}
