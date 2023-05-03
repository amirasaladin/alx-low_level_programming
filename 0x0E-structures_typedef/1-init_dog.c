#include "dog.h"
/**
 * init_dog - function that initalize a variable of type struct dog
 * @d: d
 * @age: age
 * @owner: owner
 * @name: name
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
