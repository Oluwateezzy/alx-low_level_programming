#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - count to 98
 *
 * Return: void
 * @n: value
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("98\n");
}
