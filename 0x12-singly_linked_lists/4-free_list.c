#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees list
 * @head: pointer to the list
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *ptr;

	while (head)
	{
		ptr = head;
		head = head->next;
		free(ptr->str);
		free(ptr);
	}
}
