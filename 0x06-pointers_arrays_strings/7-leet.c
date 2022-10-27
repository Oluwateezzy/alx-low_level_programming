#include "main.h"
/**
 * leet - replace char with int
 * @ch: char parameter
 * Return: char
 */
char *leet(char *ch)
{
	int i, let;

	int low_letters[] = {97, 101, 111, 116, 108};
	int upp_letters[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};
	for (i = 0; ch[i] != '\0'; i++)
	{
		for (let = 0; let < 5; let++)
		{
			if (ch[i] == low_letters[let] || ch[i] == upp_letters[let])
			{
				ch[i] = numbers[let];
				break;
			}
		}
	}
	return (ch);
}
