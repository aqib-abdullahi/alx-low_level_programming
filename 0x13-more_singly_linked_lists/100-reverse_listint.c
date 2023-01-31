#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * reverse_listint - a function that revers  listint_t
 * linked list
 * @head: pointer to head of the list
 * Return: reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;
	return (*head);
}
