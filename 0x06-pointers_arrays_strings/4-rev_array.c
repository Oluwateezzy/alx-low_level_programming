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
	int start, end, temp;

	end = n - 1;
	for (start = 0; start < end; start++, end--)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
	}
}
