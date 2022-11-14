#include "lists.h"

/**
 * get_dnodeint_at_index - function that
 * returns nth node of a dlistint_t linked list.
 *
 * @head: pointer to head
 * @index: index of the node, starting from 0
 *
 * Return: the nth node of linked list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count;

	if (!(head))
		return (NULL);

	for (count = 0; count < index; count++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
