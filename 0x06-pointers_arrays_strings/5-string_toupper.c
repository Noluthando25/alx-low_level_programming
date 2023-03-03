#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @str: string to be changed
 * Return: pointer to be changed
 */

char *string_toupper(char *str)
{
	int n = 0;

	while (str[n])
	{
		if (str[n] >= 'a' && str[n] <= 'z')
			str[n] -= 32;
		n++;
	}
	return (str);
}
