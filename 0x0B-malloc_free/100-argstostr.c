#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: int input
 * @av: pointer array
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	int i, a, r = 0, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (a = 0; av[i][a]; a++)
			l++;
	}
	l += ac;

	str = malloc(sizeof(char) * l + 1);

	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (a = 0; av[i][a]; a++)
		{
		str[r] = av[i][a];
		r++;
		}
	}
	if (str[r] == '\0')
	{
		str[r++] = '\n';
	}
	return (str);
}
