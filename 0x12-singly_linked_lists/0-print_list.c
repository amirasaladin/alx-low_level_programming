#include <stdio.h>
/**
 * print_list - a function that prints all the elements of a list_t list
 * @h: pointer to the list 
 * Return: the number of nodes
 */

size_t print_list(const list_t *h);
{
	size_t i;
	i = 0;

	while (h)
	{
		if(h->str)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		i++;
	}
	return (i);
}
