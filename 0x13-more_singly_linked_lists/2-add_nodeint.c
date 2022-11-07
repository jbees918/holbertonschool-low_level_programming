#include "lists.h"

/**
 * add_nodeint - function to add new node at
 * beginning of a listint_t list.
 * @head: double pointer to head of list
 * @n: integer to be added
 *
 * Return: address of new element, otherwise NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
