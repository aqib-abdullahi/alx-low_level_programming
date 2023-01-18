#include "function_pointers.h"

/**
 * aray_iterator - executes a function given
 * as a parameter on each element of an array.
 * @array: pointer to array
 * @size: size of the array
 * @action: pointer to function to be used
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && size > 0 && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
