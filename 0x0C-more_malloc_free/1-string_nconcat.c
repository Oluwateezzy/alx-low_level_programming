#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * @n: length of the new pointer variable
 * Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ch;
	unsigned int i, j, x, y;

	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";
	for (j = 0; s2[j] != '\0'; j++)
		;
	for (i = 0; s1[i] != '\0'; i++)
		;
	if (n >= j)
		n = j;
	ch = malloc(sizeof(char) * n + i + 1);
	if (ch == NULL)
		return ('\0');
	for (x = 0; s1[x] != '\0'; x++)
	{
		ch[x] = s1[x];
	}
	for (y = 0; y < n; y++, x++)
	{
		ch[x] = s2[y];
	}
	return (ch);
	free(ch);
}

