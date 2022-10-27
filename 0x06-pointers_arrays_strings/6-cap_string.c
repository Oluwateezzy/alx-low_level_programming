#include "main.h"
/**
 * cap_string - capitalize first leter of every string
 * @ch: string of character
 * Return: char
 */
char *cap_string(char *ch)
{
	int i;

	for (i = 0; ch[i] != '\0'; i++)
	{
		if (i == 0 || ch[i - 1] == ' ' && ch[i] >= 'a' && ch[i] <= 'z')
			ch[i] = ch[i] - 32;
	}
	return (ch);
}
