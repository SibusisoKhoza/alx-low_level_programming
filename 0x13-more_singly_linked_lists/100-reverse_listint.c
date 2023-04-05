#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @h: head of the list
 *
 * Return: pointer to the reversed
 */

listint_t *reverse_linked_list(listint_t **head)
{
	listint_t *temp1, *temp2;

	if (!head || !(*head))
		return (NULL);
	temp1 = (*head)->next;
	(*head)->next = NULL;
	while (temp1)
	{
		temp2 = *head;
		*head = temp1;
		temp1 = (*head)->next;
		(*head)->next = temp2;
	}
	return (*head);
}
