#include "main.h"
#include <stdio.h>
/**
 * malloc_checked - Check code
 * @b: var you want to allocate memory for
 * Return: the return value
*/

void *malloc_checked(unsigned int b)
{
	int *allocate;
	allocate = malloc(sizeof(b));
	while (allocate)
	{
		free(allocate);
		return;
	}
	printf(98);
}
