#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint -  adds a new node at the beginning of a listint_t
 * @head: First node
 * @n: new value
 * Return: address
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (!node)
	{
		return (NULL);
	}

	node->n = n;
	node->next = *head;
	*head = node;

	return (*head);
}
