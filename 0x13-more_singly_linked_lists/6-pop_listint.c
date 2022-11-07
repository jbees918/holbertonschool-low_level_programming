#include "lists.h"

/**
 * pop_listint - function to delete head node of
 * a listint_t linked list, and returns head node’s
 * data (n).
 * @head: double pointer to the head
 *
 * Return: head nodes data (n), if empty 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int num;

	if (*head == NULL)
		return (0);

	tmp = *head;
	*head = tmp->next;
	num = tmp->n;
	free(tmp);
	return (num);
}
