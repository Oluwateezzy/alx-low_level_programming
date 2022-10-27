#include "main.h"
/**
 * rot13 - rot13 encryption
 * @ch: string parameter
 * Return: char
 */
char *rot13(char *ch)
{
	int i, j;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; ch[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (ch[i] == alphabet[j])
			{
				ch[i] = rot[j];
				break;
			}
		}
	}
	return (ch);
}
