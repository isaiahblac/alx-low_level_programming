#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a structure for types of variable
 * @name: pointer to name
 * @age: age of dog
 * @owner: pointer to owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
