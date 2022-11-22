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
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (i == n - 2)
			printf("%d", va_arg(args, int));
		printf("%d%s", va_arg(args, int), separator);
	}
	va_end(args);
	printf("\n");
}
