#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog structure
 * @name: name of the dog
 * @age: the age of the dog
 * @owner: thw owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
