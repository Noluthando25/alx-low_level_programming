#include "main.h"

/**
 * rev_string -  function that reverses a string
 * @s: reverse a string
 * Return: nothing
 *
 */

void rev_string(char *s)
{
	int i = 0;
	int aux = 0;
	char itemp;

	while (*(s + i) != '\0')
		i += 1;
	i -= 1;

	while (aux < i)
	{
		itemp = s[i];
		s[i] = s[aux];
		s[aux] = itemp;
		aux++;
		i--;
	}
}
