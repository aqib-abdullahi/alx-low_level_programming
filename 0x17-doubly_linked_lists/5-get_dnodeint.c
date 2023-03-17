#include <stdlib.h>
#include "lists.h"

/**
  * get_dnodeint_at_index - Gets a node from a doubly linked list
  * @head: The head of the doubly linked list
  * @index: The index to find in the doubly linked list
  *
  * Return: The specific node of the doubly linked list
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int index_position = 0;

	if (head)
	{
		while (current != NULL)
		{
			if (index_position == index)
				return (current);

			current = current->next;
			++index_position;
		}
	}

	return (NULL);
}
