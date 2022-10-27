#include "main.h"
/**
 * string_toupper - string to uppercase
 * @ch: string parameter
 * Return: char
 */
char *string_toupper(char *ch)
{
	int i;

	for (i = 0; ch[i] != '\0'; i++)
	{
		if (ch[i] >= 97 && ch[i] <= 122)
		{
			ch[i] = ch[i] - 32;
		}
	}
	return (ch);
}
