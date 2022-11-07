#include "lists.h"

/**
 * listint_len - function to returns number of elements
 * in a linked listint_t list.
 * @h: head pointer
 *
 * Return: number of elements in linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
