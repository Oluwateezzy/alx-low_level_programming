#include "search_algos.h"
/**
 * linear_search - function that searches for a value in an array of integers
 * @array: arrays of numbers
 * @size: number elements in the array
 * @value: is value to be search for
 * Return: integer
 */
int linear_search(int *array, size_t size, int value)
{
	if (array == NULL)
	{
		return (-1);
	}
	for (size_t i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]", i, array[i]);
		if (array[i] == value)
			return (1);
	}
	return (-1);
}
