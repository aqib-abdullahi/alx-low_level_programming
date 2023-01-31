#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - a function that frees a list
 * and sets the head to NULL
 * @head: pointer to the head of the list
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;
	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	*head = NULL
}
