#include "lists.h"

/**
 * print_listint - function to print all
 * elements of a listint_t list.
 * @h: head pointer
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%d\n", h->n);

		n++;
		h = h->next;
	}
	return (n);
}
