#include "main.h"
/**
 * get_bit - converts a binary number to an unsigned int
 * @n: decimal number
 * @index: index
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int rem, count;
	unsigned long int prev;

	count = 0;
	while (n != 0)
	{
		prev =  n;
		n = n >> 1;
		rem = prev - (n * 2);
		if (index == count)
			return (rem);
		count++;
	}
	return (-1);
}
