#include "lists.h"

/**
 * print_dlistint - prints int struct vals of dll to SO
 * @h: pointer to first node in dll
 * Return: number of nodes in dll
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t numNodes = 0;

	/* prints node int, adds to node count, then targets next node */
	while (h)
	{
		printf("%d\n", h->n);
		numNodes++;
		h = h->next;
	}
	return (numNodes);
}
