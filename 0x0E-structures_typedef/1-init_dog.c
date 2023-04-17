#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * init_dog - tinitializes a variable of type struct dog
 * @d: pointer to struct dog
 * @name: string for  name of the dog
 * @age: float for age of the dog
 * @owner: string for owner of the dog
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
