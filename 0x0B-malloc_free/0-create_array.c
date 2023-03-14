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
	char *ptr;
	unsigned int i;

	if (size == NULL)
		return (NULL);
	if (ptr == NULL)
		return (NULL);
	ptr = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	reurn (ptr);
	
}
