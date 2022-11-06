#include "lists.h"

/**
 * add_node_end - function to adds new node
 * at the end of a list_t list.
 * @head: pointer to head of linked list
 * @str: string of characters
 *
 * Return: return address of new element, otherwise NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *ptrCopy;

	ptrCopy = *head;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	if (!(*head))
		*head = new;
	else
	{
		while (ptrCopy->next)
			ptrCopy = ptrCopy->next;

		ptrCopy->next = new;
	}
	return (new);
}
