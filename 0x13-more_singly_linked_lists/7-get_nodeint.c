#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - a function that returns the
 * nth node of a listint_t linked list
 * @head: pointer to head of the list
 * @index: index of the node
 * Return: node of the list or NULL if it doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp ? temp : NULL);
}
