#include "main.h"

int find_sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
 * find_sqrt -  natural square root of a number
 * @num: the number to find square root
 * @root: root to test
 * Return: the natural square root of a number.
 */

int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);
	return (0);
}
