#include "lists.h"

/**
 * dlistint_len - function that returns the number of
 * elements in a linked dlistint_t list
 * @h: head
 * Return: the number of elements in linked dlistint_t list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodecount = 0;

	while (h)
	{
		h = h->next;
		nodecount++;
	}
	return (nodecount);
}
