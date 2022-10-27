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
	int count, temp;

	for (count = 0; count < n; count++, n--)
	{
		temp = a[count];
		a[start] = a[n];
		a[n] = temp;
	}
}
