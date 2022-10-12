#include "function_pointers.h"
/**
 * int_index - indexes array
 * @array: array to index
 * @size: array size
 * @cmp: function to compute size
 * Return: int value
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
