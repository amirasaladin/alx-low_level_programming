#include "main.h"
#include <stdlib.h>
/**
 * _calloc - Check code
 * @nmemb: the number of elements to be allocated
 * @size: the size of elements
 * Return: pointer to the allocated memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	/* if malloc fails return NULL */
	if (!ptr)
		return (NULL);
	/* set the memory to zero */
	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;
	return (ptr);
}
