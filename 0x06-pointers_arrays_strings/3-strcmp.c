#include "main.h"
/**
 * _strcmp - compare two strings
 * @s1: char parameter
 * @s2: char parameter
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int i, count, count2;

	count = 0;
	count2 = 0;
	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		count += s1[i];
		count2 += s2[i];
	}
	return (count - count2);
}
