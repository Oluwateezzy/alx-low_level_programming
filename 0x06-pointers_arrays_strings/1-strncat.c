#include "main.h"
/**
 * _strcat - concatenate two string
 * @dest: parameter
 * @src: parameter
 * @n: byte parameter
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j, count;

	i = 0;
	j = 0;
	count = 0;
	for (; dest[i] != '\0'; i++)
	{
		count++;
	}

	for (; j < n; j++)
	{
		dest[count] = src[j];
		if (src[j] == '\0')
			break;
		count++;
	}
	return (dest);
}
