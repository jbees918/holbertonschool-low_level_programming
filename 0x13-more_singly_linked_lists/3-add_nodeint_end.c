#include "lists.h"

/**
 * add_nodeint_end - function to add new node
 * at end of a listint_t list.
 * @head: double pointer to head
 * @n: integer
 *
 * Return: address of new element, otherwise NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp, *new;

	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);

	tmp->n = n;
	tmp->next = NULL;

	if (*head == NULL)
	{
		*head = tmp;
		return (tmp);
	}
	new = *head;
	while (new->next)
		new = new->next;
	new->next = tmp;

	return (new);
}
