#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * *new_dog - creates a new dog
 * @name: name of the dog
 * @owner: owner of the dog
 * @age: of the dog
 * Return: 0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	new_dog->name = malloc(sizeof(char) * (strlen(name) + 1));

	if (new_dog->name == 0)
	{
		free(new_dog);
		return (0);
	}

	new_dog->age = age;

	new_dog->owner = malloc(sizeof(char) * (strlen(owner) + 1));

	if (new_dog->owner == 0)
	{
		free(new_dog->name);
		free(new_dog);
		return (0);
	}
	strcpy(new_dog->name, name);
	strcpy(new_dog->owner, name);
	return (new_dog);
}


