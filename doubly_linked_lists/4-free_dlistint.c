#include "lists.h"

/**
 * free_dlistint - frees dll
 * @head: pointer to first node in dll
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmpNode;

	/* cycles thru dll breaking/freeing forward links */
	while (head)
	{
		tmpNode = head->next;
		free(head);
		head = tmpNode;
	}
}
