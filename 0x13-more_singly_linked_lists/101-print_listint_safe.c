#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints a list even with loop
 * @head: pointer to head
 *
 * Return: number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *node = head;
	const listint_t **hash_table = NULL;
	size_t size = 0;
	size_t index = 0;

	hash_table = malloc(sizeof(listint_t *) * 1024);
	if (hash_table == NULL)
		exit(98);

	while (node != NULL)
	{
		index = ((size_t)node) % 1024;
		if (contains_node(hash_table, size, node))
		{
			printf("-> [%p] %d\n", (void *)node, node->n);
			break;
		}
		add_node(hash_table, size, node);
		printf("[%p] %d\n", (void *)node, node->n);
		count++;
		node = node->next;
	}
	free(hash_table);
	return (count);
}

/**
 * contains_node - checks if a node is in the hash table
 * @hash_table: pointer to the hash table
 * @size: size of the hash table
 * @node: pointer to the node to check
 *
 * Return: 1 if the node is in the hash table, 0 otherwise
 */
int contains_node(const listint_t **hash_table, size_t size, const listint_t *node)
{
	size_t index = ((size_t)node) % size;

	while (index < size)
	{
		if (hash_table[index] == node)
			return (1);
		index++;
	}
	return (0);
}

/**
 * add_node - adds a node to the hash table
 * @hash_table: pointer to the hash table
 * @size: size of the hash table
 * @node: pointer to the node to add
 */
void add_node(const listint_t **hash_table, size_t size, const listint_t *node)
{
	size_t index = ((size_t)node) % size;

	while (hash_table[index] != NULL)
	{
		if (hash_table[index] == node)
			return;
		index++;
	}
	hash_table[index] = node;
}
