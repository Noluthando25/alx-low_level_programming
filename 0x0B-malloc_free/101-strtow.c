#include "main.h"
#include <stdlib.h>

/**
 * count_word - splits a string into words
 * @s: string
 * Return: numbeer of words
 */

int count_word(char *s)
{
	int a, b, c;

	a = 0;
	b = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			a = 0;
		else if (a == 0)
		{
			a = 1;
			b++;
		}
	}
	return (b);
}

/**
 * **strtow - split string
 * @str: string to split
 * Return: pointer to array
 */

char **strtow(char *str)
{
	char **m, *cmp;
	int i, a = 0, n = 0, w, c = 0, start, end;

	while ((*(str + n)))
		n++;
	w = count_word(str);
	if (w == 0)
		return (NULL);
	m = (char **) malloc(sizeof(char *) * (w + 1));
	if (m == NULL)
		return (NULL);

			for (i = 0; i <= n; i++)
			{
				if (str[i] == ' ' || str[i] == '\0')
				{
					if (c)
					{
						end = i;
						cmp = (char *) malloc(sizeof(char) * (c + 1));
					if (cmp == NULL)
						return (NULL);
					while (star < end)
						*cmp++ = str[start++];
					*cmp = '\0';
					m[a] = cmp - c;
					a++;
					c = 0;
					}
				}
				else if (c++ == 0)
					start = i;
			}
	m[a] = NULL;
	return (m);
}
