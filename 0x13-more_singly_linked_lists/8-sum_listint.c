#include "lists.h"

/**
 * sum_listint - function to return sum of all
 * data (n) of a listint_t linked list.
 * @head: the pointer to the head
 *
 * Return: sum of the data (n), 0 if empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
