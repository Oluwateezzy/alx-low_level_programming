#include "main.h"
#include <stdio.h>
/**
 * print_array - print element of an array
 * @a: pointer array parameter
 * @n: length of array
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d\n" a[i]);
		else
			printf("%d, ", a[i]);
	}
}
