#include "main.h"
/**
 * _isdigit - check digit
 * Return: 1 if digit else 0
 * @c; digit
 */
int _isdigit(int c)
{
	if (c > '/' && c < ':')
		return (1);
	else
		return (0);
}
