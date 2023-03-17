#include <stdlib.h>
#include "lists.h"

/**
  * dlistint_len - returns the number of elements in a doubly linked list
  * @h: The head of the double linked list
  * Return: Number of elements in the doubly linked list
  */

size_t dlistint_len(const dlistint_t *h)
{
	int lenght = 0;

	while (h != NULL)
	{
		++lenght;
		h = h->next;
	}

	return (lenght);
}
