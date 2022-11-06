#include "main.h"
#include <string.h>
/**
 * _strcat - concatenate two string
 * @dest: parameter
 * @src: parameter
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int i, j, count;

	i = 0;
	j = 0;
	count = 0;
	for (; dest[i] != '\0'; i++)
	{
		count++;
	}

	for (; j >= 0; j++)
	{
		dest[count] = src[j];
		if (src[j] == '\0')
			break;
		count++;
	}
	return (dest);
}
