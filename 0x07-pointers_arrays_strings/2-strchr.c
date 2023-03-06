#include "main.h"

/**
 * _strchr -  locates a character in a string
 * @s: string to be searched
 * @c: character to be located
 * Return: a pointer to the first occurrence
 */

char *_strchr(char *s, char c)
{
	int n;

	for (n = 0; s[n] >= '\0'; n++)
	{
		if (s[n] == c)
			return (s + n);
	}
	return ('\0');
}
