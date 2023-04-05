#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list.
 * @head: head
 * Return: sum of all the data (n) values.
 */
int sum_listint(listint_t *head)
{
	int sum;

	for (sum = 0; head; head = (*head).next)
		sum += (*head).n;

	return (sum);
}
