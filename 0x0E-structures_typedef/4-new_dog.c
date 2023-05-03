#include "dog.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
/**
 * new_dog - function that creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: new_dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (!new_dog)
		return (NULL);

	new_dog->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (!new_dog->name)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = strcpy(new_dog->name, name);

	new_dog->age = age;

	new_dog->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (!new_dog->owner)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = strcpy(new_dog->owner, owner);
	return (new_dog);
}
