#include "lists.h"

/**
 * add_dnodeint - adds new node to beginning of dll
 * @head: pointer to first node in dll
 * @n: int n of node to be added to dll
 * Return: add of new node or NULL on fail
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	/* alloc mem for newNode and check for oopsy */
	newNode = malloc(sizeof(dlistint_t));
	if (!(newNode))
	{
		return (NULL);
	}
	/* fill newNode struct members */
	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = *head;
	/* put at beginning of dll */
	if (*head)
	{
		(*head)->prev = newNode;
	}
	*head = newNode;
	return (newNode);
}
