#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints a struct dog
 * @d: print a struct dog
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);


	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);

	printf("age: %2f\n", d->age);

}
