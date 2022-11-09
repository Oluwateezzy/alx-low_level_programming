#include "main.h"
#include <stdlib.h>
/**
 * _strdup - copy string to dynamic allocated memory
 * @str: char
 * Return: char
 */
char *_strdup(char *str)
{
	char *ch;
	unsigned int i, j;

	if (str == NULL)
		return ('\0');
	for (j = 0; str[j] != '\0'; j++)
		;

	ch = (char *)malloc(sizeof(char) * (j + 1));

	if (ch == NULL)
		return ('\0');
	for (i = 0; i <= j; i++)
	{
		ch[i] = str[i];
	}
	return (ch);
}
