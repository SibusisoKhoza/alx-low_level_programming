#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * @head: double pointer first node
 * Return: return value
 */

int pop_listint(listint_t **head)
{
	listint_t *current;
	int n;

	if (head && *head)
	{
		current = *head;
		n = (*current).n;
		*head = (*current).next;
		free(current);
		return (n);
	}
	return (0);
}
