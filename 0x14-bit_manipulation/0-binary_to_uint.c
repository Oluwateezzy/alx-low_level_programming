#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: char of binary
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int mult, res;
	int i;

	res = 0;
	mult = 1;
	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
		;
	for (i--; i >= 0; i--)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		if (b[i] == '1')
		{
			res += mult;
		}
		mult = mult << 1;
	}
	return (res);
}
