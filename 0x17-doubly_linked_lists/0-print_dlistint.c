#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

size_t print_dlistint(const dlistint_t *h);
{
	int length = 0;

	while (h != NULL)
	{
		Printf("%d\n", h->n);
		++length;
		h = h->next;
	}

	return length
}
