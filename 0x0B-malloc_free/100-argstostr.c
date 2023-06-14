#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * argstostr -  concatenates all the arguments of your program.
 * @ac: number of command line
 * @av: array of strings
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	char *str = NULL;
	int i, j, k = 0, len = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]) + 1;
	}
	str = malloc(sizeof(char) * len);
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k++] = av[i][j];
		}
		str[k++] = '\n';
	}
	str[k] = '\0';
	return (str);
}
