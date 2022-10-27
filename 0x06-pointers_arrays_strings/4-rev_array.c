#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverse of an array
 * @a: array parameter
 * @n: length of array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int count, i;
	int temp[10000];

	i = 0;
	for (count = n - 1; count != 0; count--, i++)
	{
		temp[i] = a[count];
	}

	for (i = 0; i < n; i++)
	{
		a[i] = temp[i];
	}
}
