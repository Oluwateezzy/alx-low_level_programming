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
	int i;

	if (str == NULL)
		return ('\0');

	ch = malloc(sizeof(str));
	if (ch == NULL)
		return ('\0');
	for (i = 0; str[i] != '\0'; i++)
	{
		str[i] = ch[i];
	}
	return (ch);
}
