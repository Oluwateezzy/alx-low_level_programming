#include "search_algos.h"
/**
 * linear_search - function that searches for a value in an array of integers
 * @array: arrays of numbers
 * @size: number elements in the array
 * @value: is value to be search for
 * Return: integer
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, high, low, mid;

	high =  size - 1;
	low = 0;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			if (i == high)
				printf("%d ", array[i]);
			else
				printf("%d, ", array[i]);
		}
		printf("\n");
		mid =  (low + high) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
