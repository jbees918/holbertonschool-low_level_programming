#include "lists.h"

/**
 * get_dnodeint_at_index - gets add of node at index
 * @head: pointer to first node in dll
 * @index: index of node to get add of
 * Return: NULL if invalid index else add of node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int currentPos = 0;
	dlistint_t *targetNode = NULL;

	/* cycles thru dll incrementing pos and checking index */
	while (currentPos != index)
	{
		if (!(head))
		{
			return (NULL);
		}
		head = head->next;
		currentPos++;
	}
	/* at this point we have a target match or are at the end */
	targetNode = head;
	return (targetNode);
}
