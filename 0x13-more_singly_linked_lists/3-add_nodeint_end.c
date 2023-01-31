#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - a function that adds a node
 * at the end of a listint_t list
 * @head: pointer to head of the list
 * @n: data to be inseted in the new node
 * Return: Address of new element or NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	struct Node* last = *head;

	struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
	
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = new_node;
	return (new_node);
}
