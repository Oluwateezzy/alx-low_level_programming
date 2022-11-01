#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - sum of diagonal
 * @a: square matrix
 * @size: size of matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	long long sum1, sum2;
	int i;

	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < size; i++)
	{
		sum1 += a[i][i];
		sum2 += a[i][n - i - 1];
	}
	printf("%ld, %ld", sum1, sum2);
}
