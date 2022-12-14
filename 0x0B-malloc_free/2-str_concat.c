#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenate two string
 * @s1: pointer parameter
 * @s2: pointer parameter
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	str = malloc(sizeof(char) * (i + j + 1));

	if (str == NULL)
		return ('\0');
	for (k = 0; k < i; k++)
	{
		str[k] = s1[k];
	}
	for (i = 0; i <= j; i++, k++)
	{
		str[k] = s2[i];
	}
	return (str);
}
