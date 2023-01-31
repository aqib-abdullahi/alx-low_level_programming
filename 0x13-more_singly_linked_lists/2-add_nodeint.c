#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the
 * beginning od a listint_t list
 * @head:pointr to head of tthe list
 * @n: data to be stored in new node
 * Return: address of new element or NULL
 * if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
