#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: first argument
 * @argv: second argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i; 
	
	for (i = 0; i < argc; i++) 
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
