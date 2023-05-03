#include "main.h"

int check_pal(char *s, int a, int n);
int _strlen_recursion(char *s);

/**
 * is_palindrome - string is a palindrome
 * @s: string to reverse
 * Return: 1 if a string is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - checks the characters
 * @s: string to calculate
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - checks the characters
 * @s: string to check
 * @a: iterator
 * @n: length of the string
 * Return: 1 if a string is a palindrome and 0 if not.
 */

int check_pal(char *s, int a, int n)
{
	if (*(s + a) != *(s + n - 1)
			return (0);
			if (a >= n)
			return (1);
			return (check_pal(s, a + 1, n - 1));
}
