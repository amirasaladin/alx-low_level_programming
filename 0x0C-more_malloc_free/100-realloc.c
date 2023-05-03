#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * _realloc - Check code
 * @ptr: pointer
 * @old_size: old size allocated for ptr in bytes
 * @new_size: new size allocated for ptr in bytes
 * Return: the return value data
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	size_t i;

	if (!ptr)
	{
		new_ptr = malloc(new_size);
		return (new_ptr);
	}
	if (old_size == new_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	if (!new_ptr)
		return (NULL);
	for (i = 0; i < old_size && i < new_size; i++)
		new_ptr[i] = ((char *)ptr)[i];

	free(ptr);
	return (new_ptr);
}
