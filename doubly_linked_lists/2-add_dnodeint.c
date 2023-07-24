#include "lists.h"

/**
 * dlistint_len - function that counts num of nodes in dll
 * @h: pointer to first node in dll
 * Return: number of nodes in dll
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t numNodes = 0;

	/* adds to node count, then targets next node */
	while (h)
	{
		numNodes++;
		h = h->next;
	}
	return (numNodes);
}
