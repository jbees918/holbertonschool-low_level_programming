#include "lists.h"

/**
* add_dnodeint - function to add new node at
* beginning of a dlistint_t list
* @head: first node.
* @n: numb given.
* Return: address of new element, or NULL if fail.
*
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = *head;
	if ((*head) != NULL)
		(*head)->prev = newnode;
	*head = newnode;
	return (newnode);
}
