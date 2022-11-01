#include "main.h"
/**
 * _strstr - locate substring
 * @haystack: string to be scanned
 * @needle: string to be searched
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
	int j, cneedle;

	cneedle = 0;
	j = 0;
	while (needle[cneedle] != '\0')
		cneedle++;
	while (*haystack != '\0')
	{
		while(*needle == *haystack && *needle != '\0')
		{
			j++;
			haystack++;
			needle++;
		}
		if (cneedle == j)
			return (haystack);
		j = 0;
		haystack++;
	}
	return ('\0');
}
