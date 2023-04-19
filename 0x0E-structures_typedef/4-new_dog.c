#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
#include <string.h>
/**
 * *_strcpy - cpy the pointed string
 * @des: pointer
 * @src: string cpy
 * Return: pointer to the dest
 */
char *_strcpy(char *dest, char *src)
{
	int length = 0;

	while (*(src + length) != '\0')
	{
		*(dest + length) = *(src + length);
		length++;
	}
	*(dest + length) = *(src + length);
	return (dest);
}

/**
 * *new_dog - creates a new dog
 * @name: name of the dog
 * @owner: owner of the dog
 * @age: of the dog
 * Return: dog_t or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *new_name, *vowner;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (new_dog);
	new_name = malloc(sizeof(name));
	if (new_name == NULL)
	{
		free(new_name);
		return (NULL);
	}
	vowner = malloc(sizeof(owner));
	{
		free(new_name);
		free(vowner);
		return (NULL);
	}
	new_dog->name = new_name;
	new_dog->owner = vowner;
	new_dog->age = age;
	_strcpy(new_name, name);
	_strcpy(vowner, owner);
	return (new_dog);
}

