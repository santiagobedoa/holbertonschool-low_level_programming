#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog data type
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 *
 * Description: defines metadata about the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#include <stdio.h>
#include <stdlib.h>

/* Additional prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
