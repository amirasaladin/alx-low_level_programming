#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * list_len - a function that returns the number of elements in a linked list_t list
 * @h: pointer to the list
 * Return: the number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;
	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
