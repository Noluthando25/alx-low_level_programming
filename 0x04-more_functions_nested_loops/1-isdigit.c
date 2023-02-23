#include "main.h"

/**
 * _isdigit - checks for a digit
 * Return: 1 if the number is a digit, 0 otherwise
 * @c: the number to be checked
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
