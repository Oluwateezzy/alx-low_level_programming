#include "main.h"
/**
 * _strchr - locate character in a string
 * @s: pointer parameter
 * @c: character parameter to be found
 * Return: char
 */
char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	return (0);
}
