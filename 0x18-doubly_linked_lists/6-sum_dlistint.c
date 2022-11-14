#include "lists.h"

/**
 * sum_dlistint - function to return sum of all data
 * (n) of a dlistint_t linked list.
 *
 * @head: pointer to head of list
 *
 * Return: sum of all data "n", otherwise if empty 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!(head))
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
