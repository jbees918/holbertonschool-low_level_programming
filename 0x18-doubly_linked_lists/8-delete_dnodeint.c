#include "lists.h"

/**
 * delete_dnodeint_at_index - function to delete node at
 * index index of a dlistint_t linked list.
 *
 * @head: double pointer to head of list
 * @index: unsigned int index of node to be deleted
 *
 * Return: 1 for success, -1 for fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;

	dlistint_t *cur, *nex, *pre;

	if (head == NULL || *head == NULL)
		return (-1);

	cur = *head;

	if (index == 0)
	{
		if ((*head)->next != NULL)
		{
			(*head)->next->prev = NULL;
			*head = (*head)->next;
		}
		else
			*head = NULL;
		free(cur);
			return (1);
	}
	while (i < index)
	{
		cur = cur->next;
		if (cur == NULL)
			return (-1);
		i++;
	}
	if (cur->next == NULL)
	{
		cur->prev->next = NULL;
		free(cur);
			return (1);
	}
	nex = cur->next;
	pre = cur->prev;
	pre->next = nex;
	nex->prev = pre;
	free(cur);
	return (1);
}
