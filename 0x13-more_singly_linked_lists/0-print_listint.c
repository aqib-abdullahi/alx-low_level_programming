#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - a function that prints
 * all the elements of a listint_t list
 * @h: pointer to the list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *current_node = h;
	size_t node_count = 0;

	while (*current_node != NULL)
	{
		printf("%d", current_node->n);
		node_count += 1;
		current_node = current_node->next;
	}
	return (node_count);
}
