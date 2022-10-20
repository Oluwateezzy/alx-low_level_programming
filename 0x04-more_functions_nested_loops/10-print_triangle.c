#include "main.h"
/**
 * print_triangle - draw triangle
 * @size: height of triangle
 * Return: void
 */
void print_triangle(int size)
{
	if (size > 0)
	{
		int i;
		
		for (i = 1; i <= size; i++)
		{
			int j;

			for (j = i; j < size; j++)
			{
				_putchar(' ');
			}

			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
