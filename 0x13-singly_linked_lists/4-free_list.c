#include "lists.h"

/**
 * free_list - function to free a list_t list.
 * @head: pointer to head of linked list
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
