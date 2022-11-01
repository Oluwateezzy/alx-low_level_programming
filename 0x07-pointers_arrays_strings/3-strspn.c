#include "main.h"
/**
 * _strspn - length of prefix substring
 * @s: string character to be scanned
 * @accept: string containing the list of characters to match
 * Return: unsigned integer
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, count, j;

	count = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					count++
			}
		}
		else
			return (count);
	}
	return (count);
}
