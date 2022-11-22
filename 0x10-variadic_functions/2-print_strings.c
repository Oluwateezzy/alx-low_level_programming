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
	char *l_str;
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
		l_str = va_arg(str, char *);
		if (l_str)
			printf("%s", l_str);
		else
			printf("(nil)");
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("%s\n", va_arg(str, char *));
	va_end(str);
}
