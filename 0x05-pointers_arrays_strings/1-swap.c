#include "main.h"
/**
 * swap_int - swap the value of two integer
 * @a: first parameter
 * @b: second parameter
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
