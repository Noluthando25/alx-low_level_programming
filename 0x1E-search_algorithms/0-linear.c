#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - earches for a value in an array of integers
 * @array: pointer to the first element
 * @size: number of elements
 * @value: the value to search for
 * Return: 0
 */

int linear_search(int *array, size_t size, int value)
{
size_t i;

if (array == NULL)
return (-1);

for (size_t i = 0; i < size; i++)
{
printf("Value checked array[%ld] - [%d]\n", i, array(i));

if (array[i] == value)
return (i);
}
}
return (-1);
}
