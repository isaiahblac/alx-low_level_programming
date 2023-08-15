#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: pointer to name
 * @age: age
 * @owner: pointer to owner
 *
 * Return: Pointer to new dog
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int namelength;
	int ownerlength;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	namelength = _strlen(name);
	new_dog->name = malloc(sizeof(char) * namelength + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = _strcpy(new_dog->name, name);
	ownerlength = _strlen(owner);
	new_dog->owner = malloc(sizeof(char) * ownerlength + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = _strcpy(new_dog->owner, owner);
	new_dog->age = age;

	return (new_dog);
}

/**
 * _strlen -  returns the lenght of a string.
 * @s: char variable
 * Return: string length.
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/**
 *  *_strcpy - to copy string
 *  @dest: location copied to
 *  @src: location copied from
 *  Return: character which in this case is dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0 ; src[i] != '\0' ; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
