#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * struct dog - dog class
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */

{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
typedef struct dog dog_t;
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
