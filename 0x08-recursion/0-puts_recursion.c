#include "main.h"
/**
 * _puts_recursion - print a string
 * @s: string
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_puts_recurrsion(s - 1);
		_putchar(*s);
	}
}
