#include "lists.h"

/**
 * free_listint - function to free a listint_t list.
 * @head: pointer to head
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
