#include "lists.h"
#include "stdio.h"
/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: head pointer
 * Return: the number of nodes.
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;
	const dlistint_t *ptr = NULL;

	ptr = h;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
