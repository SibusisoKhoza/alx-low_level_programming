#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: head
 * @idx: index of node
 * @n: n value
 * Return: Address of failed node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *hold = *head;
	unsigned int i = 0;

	if (!idx)
	{
		new = malloc(sizeof(listint_t));
		if (!new)
			return (NULL);

		(*new).n = n;
		(*new).next = *head;

		*head = new;

		return (*head);
	}

	while (hold)
	{
		if (i == (idx - 1))
		{
			new = malloc(sizeof(listint_t));
			if (!new)
				return (NULL);
			(*new).n = n;
			(*new).next = (*hold).next;
			(*hold).next = new;
			return (new);
		}
		hold = (*hold).next;
		i++;
	}
	return (NULL);
}
