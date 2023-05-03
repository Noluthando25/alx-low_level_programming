#include <stdlib.h>
#include "dog.h"

/**
 * new_dog -  creates a new dog.
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int i, l, m;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (l = 0; name[l]; l++)
		;
	l++;
	dog->name = malloc(l * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = o; i < l; i++)
		dog->name[i] = name[i];
	dog->age = age;
	for (m = 0; owner[m]; m++)
		;
	m++;
	dog->owner = malloc(m * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < m; m++)
		dog->owner[i] = owner[i];
	return (dog);
}
