#include "main.h"
/**
 * _memcpy - copy memeory area
 * @dest: destination parameter
 * @src: source destination
 * @n: size parameter
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
