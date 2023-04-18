#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
#include <string.h>
/**
 * strlen - return len of string
 * @s: string
 * Return: len of string
 */
int _strlen(char *s)
{
	int c;

	c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	return (c);
}

/**
 * strcpy - cpy the pointed string
 * @des: pointer
 * @src: string cpy
 * Return: pointer to the des
 */
char *_strcpy(char *des, char *src)
{
	int length, i;

	length = 0;
	while (src[length] != '\0')
	{
		length++;
	}
	for (i = 0; i < length; i++)
	{
		des[i] = src[i];
	}
	des[i] = ('\0');
	return (des);
}

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

	/*allocate memory for struct new_dog*/
	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	/*allocate memory for name of new_dog*/
	new_dog->name = malloc(sizeof(char) * (strlen(name) + 1));

	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	/*put age*/
	new_dog->age = age;

	/*alocate memory for owner's new_dog*/
	new_dog->owner = malloc(sizeof(char) * (strlen(owner) + 1));

	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	/*cpy name and owner string*/
	new_dog->name = strcpy(new_dog->name, name);
	new_dog->owner = strcpy(new_dog->owner, name);
	return (new_dog);
}


