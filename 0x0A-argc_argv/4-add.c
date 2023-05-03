#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * check_num - check
 * @str: array
 * Return: ALWAYS 0
 */

int check_num(char *str)
{
	unsigned int a;

	a = 0;
	while (a < strlen(str))
	{
		if (!isdigit(str[a]))
		{
			return (0);
		}
		a++;
	}
	return (1);
}

/**
 * main - print name of program
 * @argc: argument
 * @argv: argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a;
	int str_to_int;
	int sum = 0;

	a = 1;

	while (a < argc)
	{
		if (check_num(argv[a]))
		{
			str_to_int = atoi(argv[a]);
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		a++;
	}
	printf("%d\n", sum);
	return (0);
}
