#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum all variadic function
 * @n: length of variadic args
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
		sum = sum + va_arg(args, int);
	va_end(args);
	return (sum);
}
