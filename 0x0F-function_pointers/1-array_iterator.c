#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "function_pointers.h"

/**
 * array_iterator -  function given as a parameter on each element of an array
 * @array: array
 * @size: size of array
 * @action: pointer to function
 * Return: 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	size_t s1_len = strlen(s1);
	size_t s2_len = strlen(s2);

	if (n >= s2_len)
		n = s2_len;
	char *result = malloc(s1_len + n + 1);

	if (result == NULL)
		return (NULL);
	memcpy(result, s1, s1_len);
	memcpy(result + s1_len, s2, n);
	result[s1_len + n] = '\0';
	return (result);
}
