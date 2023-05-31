#include "main.h"
/**
 * clear_bit - clear bit a specific index
 * @n: digit
 * @index: index
 * Return: int
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	mask = 1UL << index;
	mask = ~mask;
	*n &= mask;
	return (1);
}
