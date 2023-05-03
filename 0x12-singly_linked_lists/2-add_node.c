#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * add_node - a fun that adds a new node at the beginning
 * @head: pointer to the list
 * @str: string
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_el;

	new_el = malloc(sizeof(list_t));
	if (!new_el)
		return (NULL);
	new_el->str = strdup(str);
	new_el->len = strlen(str);
	new_el->next = *head;
	*head = new_el;
	return (new_el);
}
