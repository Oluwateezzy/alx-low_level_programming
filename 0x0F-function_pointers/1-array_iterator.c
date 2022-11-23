#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - use pointer to function given to performe the needed action
 * on all array element
 * @size: size of array
 * @array: array pointer parameter
 * @action: pointer to function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
