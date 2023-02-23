#include "main.h"

/**
 * _isdigit - checks for a digit
 * Return: an integer value
 * @c: pass as an integer
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
