#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints a struct dog
 * @d: print a struct dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)\n";

	if (d->owner == NULL)
		d->owner = "(nil)\n";

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
