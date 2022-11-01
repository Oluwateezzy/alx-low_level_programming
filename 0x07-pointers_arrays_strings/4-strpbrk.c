#include "main.h"
/**
 * _strpbrk - seaches a string for any of a set of bytes
 * @s: string to be scanned
 * @accept: string containing the characters to match
 * Return: char
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	for (; *s != '\0'; s++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
				return (s);
		}
	}
	return ('\0');
}
