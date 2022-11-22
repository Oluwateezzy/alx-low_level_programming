#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - print all the numbers in a variadic argument
 * @separator: char parameter
 * @n: length of variadic argument
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	if (separator == NULL)
		separator = "";
	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(args, n);
	for (i = 0; i < n - 1; i++)
	{
		printf("%d%s", va_arg(args, int), separator);
	}
	printf("%d\n", va_arg(args, int));
	va_end(args);
}
