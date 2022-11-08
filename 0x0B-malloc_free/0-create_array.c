#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of chars
 * @size: size of an array
 * @c: char
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;

	if (size == 0)
		return ('\0');

	s = malloc(size * sizeof(char));

	if (*s == '\0')
		return ('\0');
	for (; i < size; i++)
		s[i] = c;
	return (s);
}
