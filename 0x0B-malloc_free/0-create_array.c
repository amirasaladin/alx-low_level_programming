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
	char *s;
	unsigned int i;

	i = 0;
	while (i < size)
	{
		s = malloc(INT_MAX);
		if (s == NULL)
		{
			return (NULL);
        	}
		s[i] = c;
		i++;
	}
	return (s);
}
