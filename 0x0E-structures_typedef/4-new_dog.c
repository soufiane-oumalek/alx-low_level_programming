#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
#include <string.h>
/**
 * _strlen - return len of string
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
 * *_strcpy - cpy the pointed string
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
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *new_name, *new_owner;

	/*allocate memory for struct new_dog*/
	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	/*allocate memory for name of new_dog*/
	new_name = malloc(sizeof(char) * (strlen(name) + 1));

	if (new_name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	/*alocate memory for owner's new_dog*/
	new_owner = malloc(sizeof(char) * (strlen(owner) + 1));

	if (new_owner == NULL)
	{
		free(new_name);
		free(new_dog);
		return (NULL);
	}

	/*cpy name and owner string*/
	_strcpy(new_name, name);
	_strcpy(new_owner, name);

	new_dog->name = new_name;
	new_dog->owner = new_owner;
	new_dog->age = age;
	return (new_dog);
}


