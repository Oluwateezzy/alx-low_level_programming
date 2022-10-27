#include "main.h"
/**
 * leet - replace char with int
 * @ch: char parameter
 * Return: char
 */
char *leet(char *ch)
{
	int i;

	for (i = 0; ch[i] != '\0'; i++)
	{
		if (ch[i] == 'a' || ch[i] == 'A')
			ch[i] = '4';
		else if (ch[i] == 'e' || ch[i] == 'E')
			ch[i] = '3';
		else if (ch[i] == 'o' || ch[i] == 'O')
			ch[i] = '0';
		else if (ch[i] == 't' || ch[i] == 'T')
			ch[i] = '7';
		else if (ch[i] == 'l' || ch[i] == 'L')
			ch[i] = '1';
	}
	return (ch);
}
