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
	int i, n;
	char *arr;

	if (arg != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	arr = (char *)main;
	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%02hhx\n", arr[i]);
			break;
		}
		printf("%02hhx", arr[i]);
	}
	return (0);
}
