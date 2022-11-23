#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - print name
 * @name: name parameter
 * @f: pointer to function parameter
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
