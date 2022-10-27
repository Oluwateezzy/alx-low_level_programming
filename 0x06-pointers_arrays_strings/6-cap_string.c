#include "main.h"
/**
 * cap_string - capitalize first leter of every string
 * @ch: string of character
 * Return: char
 */
char *cap_string(char *ch)
{
	int i, count;
	int sep_char = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125}

	count = 0;
	if (ch[count] >= 97 && ch[count] <= 122)
		ch[count] = ch[count] - 32;
	count++;
	for (; ch[count] != '\0'; count++)
	{
		for (i = 0; i < 13; i++)
		{
			if (ch[count] == sep_char[i])
			{
				if (ch[count + 1] >= 97 && ch[count + 1] <= 122)
					ch[count + 1] = ch[count + 1] - 32;
				break;
			}
		}
	}
	return (ch);
}
