#include "lists.h"

/**
 * add_dnodeint_end - function to add new
 * node the end of a dlistint_t list.
 *
 * @head: double pointer to head
 * @n: integer variable from the provided struct
 *
 * Return: address of new element, otherwise NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *end;

	new = malloc(sizeof(dlistint_t));
	if (!(new))
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	if (!(*head))
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	end = *head;
	while (end->next)
	{
		end = end->next;
	}
	end->next = new;
	new->prev = end;

	return (new);
}
