#include "search_algos.h"
/**
 * linear_search - searches for values in an array
 * of integers integers using the Linear search algorithm
 *
 * @array: array to be searched
 * @size: number of elements in an array
 * @value: value to be searched for
 * Return: The first index where value is located
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	for (; i < size; ++i)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		if (array[i] == value)
			break;
	}

	if (i == size)
		return (-1);

	return (i);
}
