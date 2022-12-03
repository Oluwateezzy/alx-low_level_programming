#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: char of binary
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result, i;

	result = 1;
	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		int ch;
		if (ch < '/' && ch > ':')
			return (0);

		ch = atoi(b[i]);
		result = result + (ch * power(i));
	}
	return (result);
}
int power(int pow)
{
	if (pow != 0)
		return (2 * power(pow - 1));
	else
		return (1);
}
