#include "lists.h"

/**
 * list_len - function to return number
 * of elements in linked list_t list
 *
 * @h: given pointer
 *
 * return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
