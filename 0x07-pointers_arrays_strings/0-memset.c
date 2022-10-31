#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: pointer to an array parameter
 * @b: constant byte parameter
 * @n: size parameter
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
