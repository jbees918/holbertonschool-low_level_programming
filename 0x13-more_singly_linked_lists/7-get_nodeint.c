#include "lists.h"

/**
 * get_nodeint_at_index - function that
 * returns nth node of a listint_t linked list.
 * @head: pointer to head
 * @index: of node
 *
 * Return: node doesn't exist return 0
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	if (head == NULL)
		return (NULL);

	for (count = 0; count < index; count++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
