#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: digit
 * @m: shift
 * Return: int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor;
	unsigned int count;

	xor = n ^ m;
	count = 0;

	while (xor != 0)
	{
		xor &= (xor - 1);
		count++;
	}
	return (count);
}
