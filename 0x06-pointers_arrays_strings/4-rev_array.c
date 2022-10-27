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
	int count;

	for (count = n - 1; count >= 0; count--)
	{
		if (count == 0)
		{
			printf(", ");
		}
		printf("%d", a[count]);
	}
	printf("\n");
}
