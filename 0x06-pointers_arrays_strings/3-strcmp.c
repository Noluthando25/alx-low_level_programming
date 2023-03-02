#include "main.h"

/**
 * _strcmp - that compares two strings
 * @s1:pointer to second string
 * @s2: pointer to second string
 * Return: pointer to the resulting string
 *
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
