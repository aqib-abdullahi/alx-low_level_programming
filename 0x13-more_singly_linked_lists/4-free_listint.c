#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - a function that frees a ist
 * @head: pointer to the head of the list
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
