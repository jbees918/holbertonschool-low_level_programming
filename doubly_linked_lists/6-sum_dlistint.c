#include "lists.h"

/**
 * sum_dlistint - function returns sum of dll n struct mems
 * @head: pointer to first node in dll
 * Return: sum of node int n members in dll
 */
int sum_dlistint(dlistint_t *head)
{
	unsigned int sumD = 0;

	/* cycles thru dll adding struct ns to sumD */
	while (head)
	{
		sumD += head->n;
		head = head->next;
	}
	/* see the loop breaks when head->next is NULL */
	return (sumD);
}
