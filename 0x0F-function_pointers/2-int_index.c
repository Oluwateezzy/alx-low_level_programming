#include "function_pointers.h"
#include "stdlib.h"
/**
 * int_index - search for an integer
 * @array: array parameter
 * @size: length of array
 * @cmp: pointer to function
 * Return: void
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, check;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		check = cmp(array[i]);
		if (check != 0)
			return (i);
	}
	return (-1);
}
