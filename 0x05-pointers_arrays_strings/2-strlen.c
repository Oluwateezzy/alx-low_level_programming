#include "main.h"
/**
 * _strlen - return the length of string
 * @s: parameter
 * Return: int
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
