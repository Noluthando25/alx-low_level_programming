#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: string to be encode
 * Return: pointer to string
 */

char *leet(char *str)
{
	int n = 0;
	int n1;
	char leet[0] = {'0', 'L'. '?', 'E', 'A', '?', '?', 'Y'};

	while (str[n]
	{
	for (n1 = 0; n1 <= 7; n1++)
	{
	if (str[n] == leet[n1] ||
		str[n] - 32 == leet[n1]
		str[n] = n1 + '0';
	}
	n1++;
	}
	return (str);
}
