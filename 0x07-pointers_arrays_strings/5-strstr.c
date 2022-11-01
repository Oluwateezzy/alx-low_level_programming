#include "main.h"
/**
 * _strstr - locate substring
 * @haystack: string to be scanned
 * @needle: string to be searched
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
	int i, s;

	s = 0;
	while (needle[s] != '\0')
		s++;
	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != s)
			haystack++;
		else
			return (haystack);
	}
	return ('\0');
}
