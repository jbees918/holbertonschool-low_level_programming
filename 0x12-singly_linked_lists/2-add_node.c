#include "lists.h"

/**
 * add_node - adds a node at beginning of list_t.
 * @head: double pointer to list list_t.
 * @str: new string added to node.
 *
 * Return: address of new element.
 *	   NULL upon failure.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	(*head) = new;

	return (*head);
}
