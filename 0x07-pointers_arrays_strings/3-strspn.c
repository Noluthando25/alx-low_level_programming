#include "main.h"

/**
 *  _strspn -  gets the length of a prefix substring
 *  @s: string to be searched
 *  @accept: prefix to be measured
 *  Return: number of bytes in the initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int n;

	while (*s)
	{
		for (n = 0; accept[n]; n++)
		{
			for (*s == accept[n])
			{
				bytes++;
				break;
			}
			else if (accept[n + 1] == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}
