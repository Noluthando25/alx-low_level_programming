#include "main.h"

/**
 * _strcat - the string pointed to be the @src, include the terminal
 * @dest: a pointer to the string to be concatenated upon
 * @src: source string to be appended
 * Return: a pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int index = 0;
	int dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
