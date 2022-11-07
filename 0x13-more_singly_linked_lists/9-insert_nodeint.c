#include "lists.h"
#include "2-add_nodeint.c"

/**
 * insert_nodeint_at_index - function
 * insert new node at a given position.
 * @head: double pointer to head
 * @idx: index where we add new node
 * @n: integer added to new node
 *
 * Return: address of new node, otherwise NULL
 *
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *new;
	unsigned int count = 0;

	if (idx == 0)
	{
		add_nodeint(head, n);
		return (*head);
	}
	tmp = *head;
	while (count < idx - 1)
	{
		if (!(tmp->next))
			return (NULL);

		tmp = tmp->next;
	   count++;
	}
	new = malloc(sizeof(listint_t));
	if (tmp == NULL)
	{
		free(tmp);
		return (NULL);
	}
	new->next = tmp->next;
	tmp->next = new;
	new->n = n;

	return (new);
}
