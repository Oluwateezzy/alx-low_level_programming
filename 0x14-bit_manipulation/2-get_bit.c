#include "main.h"
/**
 * get_bit - converts a binary number to an unsigned int
 * @n: decimal number
 * @index: index
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	bit = (n >> index) & 1;
	return (bit);
}
