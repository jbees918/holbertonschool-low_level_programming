#include "lists.h"

/**
 * add_dnodeint_end - add new node to end of dll
 * @head: pointer to first node in dll
 * @n: int n of node to be added to dll
 * Return: add of new node or NULL on fail
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *oldLast;

	/* alloc mem for newNode and check for oopsy */
	newNode = malloc(sizeof(dlistint_t));
	if (!(newNode))
	{
		return (NULL);
	}
	/* fill newNode struct next & n members */
	newNode->n = n;
	newNode->next = NULL;
	/* check if empty dll */
	if (!(*head))
	{
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}
	/* find end of dll */
	oldLast = *head;
	while (oldLast->next)
	{
		oldLast = oldLast->next;
	}
	/* make newNode last node in dll */
	oldLast->next = newNode;
	newNode->prev = oldLast;
	return (newNode);
}
