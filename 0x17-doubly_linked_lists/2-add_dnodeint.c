#include "lists.h"
/**
* add_dnodeint - adds a new node at the beginning of a dlistint_t list
* @head: head pointer
* @n: data of type int
* Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	if (!head || !temp)
		return (NULL);
	temp->n = n;
	temp->prev = NULL;
	temp->next = *head;
	(*head)->prev = temp;
	*head = temp;

	return (temp);
}
