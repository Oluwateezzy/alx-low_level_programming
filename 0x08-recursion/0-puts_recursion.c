#include "main.h"
/**
 * _puts_recursion - print a string
 * @s: string
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*str)
	{
		_puts_recurrsion(str - 1);
		_putchar(*str);
	}
}
