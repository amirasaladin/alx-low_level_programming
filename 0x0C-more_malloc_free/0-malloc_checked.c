#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - Check code
 * @b: the ammount of ememory you want to allocate
 * Return: the return value
*/

void *malloc_checked(unsigned int b)
{
	void *allocate;

	allocate = malloc(b);
	if (!allocate)
	{
		exit(98);
	}
	return (allocate);
}
