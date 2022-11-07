#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - print the last digit of a string
 *
 *@c: parameter
 *
 * Return: value
 */
int print_last_digit(int c)
{
	int last = c % 10;

	if (last < 0)
		last = last * -1;

	_putchar(last + '0');
	return (last);
}
