#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - print all the string in variadic function
 * @separator: char parameter
 * @n: length of variadic argument
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list str;

	if (separator == NULL)
		separator = "";
	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(str, n);
	for (i = 0; i < n - 1; i++)
	{
		if (va_arg(str, char *) == NULL)
			va_arg(str, char *) = "(nil)";
		printf("%s%s", va_arg(str, char *), separator);
	}
	printf("%s\n", va_arg(str, char *));
	va_end(str);
}
