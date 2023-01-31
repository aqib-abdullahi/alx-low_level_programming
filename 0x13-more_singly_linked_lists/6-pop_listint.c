#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - a function that deletes the
 * head of a node and returns the head node's data
 * @head: pointer to head of the node
 * Return: head node's  data
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	if (head == NULL || *head == NULL)
		return (0);

	data = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (data);
}
