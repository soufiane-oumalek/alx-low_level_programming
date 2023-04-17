#ifndef DOG_H
#define DOG_H

/**
 * struct dog - describe a dog
 * @name: dog's name
 * @age: dog's age
 * @owner: owner of the dog
 * description: for a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

