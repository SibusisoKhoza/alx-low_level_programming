#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to first element
 * @index: index
 * Return: node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter;

	for (counter = 0; head; counter++, head = (*head).next)
	{
		if (counter == index)
		{
			return (head);
		}
	}

	return (NULL);
}
