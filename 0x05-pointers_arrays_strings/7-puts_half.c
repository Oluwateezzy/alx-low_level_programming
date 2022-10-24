#include "main.h"
#include <string.h>
/**
 * puts_half - print half of string
 * @str: string parameter
 * Return: void
 */
void puts_half(char *str)
{
	int n, len;

	len = strlen(str);
	if (len % 2 == 0)
		n = (len - 1) / 2;
	else
		n = len / 2;
	for (; n <= len; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
