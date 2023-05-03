#include "dog.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_dog - function that prints a struct dog
 * @d: d
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name == NULL ? "(nil)" : d->name);
		printf("Age: %f\n", !d->age ? 0 : d->age);
		printf("Owner: %s\n", d->owner == NULL ? "(nil)" : d->owner);
	}
}
