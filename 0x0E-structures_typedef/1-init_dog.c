#include "dog.h"
#include "main.h"

/**
 * init_dog - initialize a variable type of struct dog
 * @name: name of a dog
 * @age: age of a dog
 * @owner: owner of the dog
 * @d: pointer of struct
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
