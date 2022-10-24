#include "main.h"
#include <string.h>
/**
 * puts_half - print half of string
 * @str: string parameter
 * Return: void
 */
void puts_half(char *str)
{
	int n, len, i;

	for (i = 0; i != '\0'; i++);

	if (i % 2 == 0)
		n = (i - 1) / 2;
	else
		n = i / 2;
	for (; n < i; n++)
		_putchar(str[n]);
	_putchar('\n');
}
