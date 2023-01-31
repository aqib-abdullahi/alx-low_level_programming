#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - a function that deletes the node
 * at index of a listint_t linked list
 * @head: pointer to the head of the list
 * @index: index to node to be deleted
 * Return: 1 if it succeeds, -1 if it fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 1;

	listint_t *new = *head, *temp;

	if (!head || !*head)
		return (-1);
	if (index == 0)
	{
		*head = new->next;
		free(new);
		return (1);
	}
	temp = *head;
	while (temp)
	{
		if (count == index)
		{
			new = temp->next;
			temp->next = new->next;
			free(new);
			return (1);
		}
		temp = temp->next;
		count++;
	}
	return (-1);
}
