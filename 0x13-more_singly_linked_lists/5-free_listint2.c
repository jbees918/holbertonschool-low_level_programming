#include "lists.h"

/**
 * free_listint2 - function to free listint_t list.
 * @head: double pointer to head
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head);
		(*head) = (*head)->next;
		free(tmp);
	}
}
