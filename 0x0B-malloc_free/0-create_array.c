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
	if (size == 0)
		return ('\0');
	char s = malloc(size * sizeof(char));

	if (s == '\0')
		return ('\0');
	s = c;
	return (s);
}
