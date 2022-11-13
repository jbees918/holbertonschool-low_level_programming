#include "lists.h"

/**
* dlistint_len - function to return number
* of elements in linked dlistint_t list.
* @h: pointer.
* Return: number of elements in linked list.
*
*/

size_t dlistint_len(const dlistint_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
