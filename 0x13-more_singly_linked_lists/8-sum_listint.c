#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - a function that returns the sum
 * of all data(n) in a linked listint_t list
 * @head: pointer to the head of a list
 * Return: sum of all data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
