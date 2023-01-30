#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * listint_len - a function that returns
 * the number of elements in a linked
 * listint_t list
 * @h: pointer to header
 * Return: number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t element = 0;

	while (h)
	{
		element++;
		h = h->next;
	}

	return (element);
}
