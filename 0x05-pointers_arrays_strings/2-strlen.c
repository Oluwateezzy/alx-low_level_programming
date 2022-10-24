#include "main.h"
/**
 * _strlen - return the length of string
 * @s: parameter
 * Return: int
 */
int _strlen(char *s)
{
	char ch[];
	int i;

	ch = *s;
	for (i = 0; ch[i] != '\0'; ++i);

	return (i);
}
