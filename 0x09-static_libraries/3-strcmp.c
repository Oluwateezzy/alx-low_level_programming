#include "main.h"
/**
 * _strcmp - compare two strings
 * @s1: char parameter
 * @s2: char parameter
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int i, count;

	count = 0;
	for (i = 0; count == 0; i++)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			break;
		count = s1[i] - s2[i];
	}
	return (count);
}
