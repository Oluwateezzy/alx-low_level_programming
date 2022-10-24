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
	n = (len - 1) / 2;

	while (n = '\0')
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
