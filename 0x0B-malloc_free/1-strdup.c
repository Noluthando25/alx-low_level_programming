#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strdup - a pointer to a new string which is a duplicate of the string
 * @str: string
 * Return: NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *duplicate = NULL;

	if (str == NULL)
	{
		return (NULL);
	}
	duplicate = malloc(strlen(str) + 1);
	if (duplicate == NULL)
	{
		return (NULL);
	}
	strcpy(duplicate, str);
	return (duplicate);
}
