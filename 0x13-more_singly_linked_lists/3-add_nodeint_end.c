#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of a listint_t
 * @head: pointer to first address
 * @n: node value
 * Return: address of new node
 */


listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *last_node;

	if (!head)
	{
		return (NULL);
	}

	node = malloc(sizeof(listint_t));
	if (!node)
	{
		return (NULL);
	}

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}

	for (last_node = *head; last_node->next != NULL; last_node = last_node->next)
		;

	last_node->next = node;

	return (node);
}
