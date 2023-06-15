#include "lists.h"
/**
* add_dnodeint - adds a new node at the beginning of a dlistint_t list
* @head: head pointer
* @n: data of type int
* Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t temp = malloc(sizeof(dlistint));

	if (!temp)
		return (NULL);
	temp->prev = NULL;
	temp->next = NULL;
	temp->n = n;
	temp->next = head;
	head->prev = temp;
	head = temp;
	return (temp);
}
