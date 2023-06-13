#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * str_concat -  concatenates two strings
 * @s1: pointer
 * @s2: string
 * Return: NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *concatenated = NULL;
	int s1_length = 0, s2_length = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	s1_length = strlen(s1);
	s2_length = strlen(s2);
	concatenated = malloc(sizeof(char) * (s1_length + s2_length + 1));
	if (concatenated == NULL)
	{
		return (NULL);
	}
	strcpy(concatenated, s1);
	strcat(concatenated, s2);
	return (concatenated);
}
