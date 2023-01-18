#include "function_pointers.h"

/**
 * int_index - a function that searches
 * for an integer
 * @array: array to be checked
 * @size: size of array
 * @cmp: pointer to function to be used
 * Return: -1 if size <= 0 or f no element matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			for (i = 0; i < size; i++)
			{
				if (cmp(array[i]))
					return (i);
			}
		}
	}
	return (-1);
}
