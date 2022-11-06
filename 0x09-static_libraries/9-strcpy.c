#include "main.h"
/**
 * _strcpy - copy content
 * Return: char dest
 * @dest: pointer destination parameter
 * @src: pointer source parameter
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
