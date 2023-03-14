#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * create_array - Check code
 * @size: integer
 * @c: character
 * Return: the return value data
*/

char *create_array(unsigned int size, char c)
{
	char *ptr;

	ptr = malloc(sizeof(char) * size);
	if (size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
