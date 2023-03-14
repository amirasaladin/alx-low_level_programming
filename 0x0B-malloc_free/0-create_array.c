#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <limits.h>
/**
 * create_array - Check code
 * @size: integer
 * @c: character
 * Return: the return value data
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	ptr = malloc(sizeof(char) * size);
	if (size == 0)
	{
		ptr = malloc(INT_MAX);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
