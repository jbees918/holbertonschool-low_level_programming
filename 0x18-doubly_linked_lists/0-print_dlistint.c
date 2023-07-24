#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a dlistint_t
 * @h: head
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodecount = 0;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		nodecount++;
	}
	return (nodecount);
}
