#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - searches for an integer.
 * @array: array of elements
 * @size: size is the number of elements in the array array.
 * @cmp:function to pointer
 * Return: returns the index of the first element,
 * for which the cmp function does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
		{
			if ((*cmp)(array[i]))
				return (i);
		}
		return (-1);
	}
	else
		return (-1);
}
