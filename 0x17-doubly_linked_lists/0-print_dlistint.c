#include "lists.h"
/**
 * print_dlistint -  prints all the elements of a dlistint_t list.
 * @h: head pointer
 * Return: the number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;
	const dlistint_t *ptr = NULL;
	ptr = h;

	while (ptr->next != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return count;
}
