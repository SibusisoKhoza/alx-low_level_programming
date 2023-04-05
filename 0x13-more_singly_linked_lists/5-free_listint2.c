#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - adds a new node at the end of a listint_t list.
 * @head: pointer to pointer of the 1st elem
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	while (head != NULL && *head != NULL)
	{
		current = *head;
		*head = (*current).next;
		free(current);
	}
}
